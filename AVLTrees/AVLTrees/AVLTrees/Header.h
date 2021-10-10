#pragma once
#include <iostream>
#include <fstream>

using namespace std;

typedef enum {LH, EH, RH} BalFactor;

template<class ItemType>
struct TreeNode
{
	ItemType info;
	TreeNode* left;
	TreeNode* right;
	BalFactor bf;
};

template<class ItemType>
class TreeType
{
public:
	TreeType();
	~TreeType();
	TreeType(const TreeType<ItemType>& originalTree);
	//void operator = (const TreeType<ItemType>& originalTree);
	void InsertItem(ItemType item);
	void PrintTree(ofstream& outfile) const;
	
private:
	TreeNode<ItemType>* root;
};


template <class ItemType>
void TreeType<ItemType>::PrintTree(ofstream& outfile) const
{
	Print(root, outfile);
}

template <class ItemType>
void Print(TreeNode<ItemType>* tree, ofstream& outFile)
{
	if (tree != NULL)
	{
		Print(tree->left, outFile);	 // Print left subtree.
		outFile << tree->info << " ";
		Print(tree->right, outFile); // Print right subtree.
	}

}

template <class ItemType>
void Print(TreeNode<ItemType>* tree, ofstream& outFile);

template <class ItemType>
TreeType<ItemType> ::TreeType()
{
	root = NULL;
}

template <class ItemType>
TreeType<ItemType> :: ~TreeType()
{
	Destroy(root);
}

template <class ItemType>
void Destroy(TreeNode<ItemType>*& tree)
// Post: tree is empty; nodes have been deallocated.
{
	if (tree != NULL)
	{
		Destroy(tree->left);
		Destroy(tree->right);
		delete tree;
	}
}


template <class ItemType>
void TreeType<ItemType> ::InsertItem(ItemType item)
{
	bool taller;
	Insert(root, item, taller);
}

template <class ItemType>
void Insert(TreeNode<ItemType>*& tree, ItemType item, bool& taller)
{
	if (tree == NULL)
	{
		tree = new TreeNode<ItemType>;
		tree->left = NULL;
		tree->right = NULL;
		tree->info = item;
		tree->bf = EH;
		taller = true;
	}
	else if (item == tree->info)
	{
		cerr << "Duplicate key is not allowed in AVL tree." << endl;
	}
	else if (item < tree->info)
	{
		Insert(tree->left, item, taller);
		if (taller)
		{
			switch (tree->bf)
			{
			case LH:
				LeftBalance(tree, taller);
				break;
			case EH:
				tree->bf = LH;
				break;
			case RH:
				tree->bf = EH;
				taller = false;
				break;
			default:
				break;
			}
		}
	}
	else if (item > tree->info)
	{
		Insert(tree->right, item, taller);
		if (taller)
		{
			switch (tree->bf)
			{
			case RH:
				RightBalance(tree, taller);
				break;
			case EH:
				tree->bf = RH;
				break;
			case LH:
				tree->bf = EH;
				taller = false;
				break;
			default:
				break;
			}
		}
	}
}

template <class ItemType>
void RightBalance(TreeNode<ItemType>*& tree, bool& taller)
{
	TreeNode<ItemType>* rs = tree->right;
	TreeNode<ItemType>* ls;

	switch (rs->bf)
	{
	case RH:
		tree->bf = rs->bf = EH;
		RotateLeft(tree);
		taller = false;
		break;
	case EH:
		cerr << "Tree already balanced" << endl;
		break;
	case LH:
		ls = rs->left;
		switch (ls->bf)
		{
		case RH:
			tree->bf = LH;
			rs->bf = EH;
			break;
		case EH:
			tree->bf = rs->bf = EH;
			break;
		case LH:
			tree->bf = EH;
			rs->bf = RH;
			break;
		default:
			break;
		}
		ls->bf = EH;
		RotateRight(tree->right);
		RotateLeft(tree);
		taller = false;
	default:
		break;
	}
}

template<class ItemType>
void LeftBalance(TreeNode<ItemType>*& tree, bool& taller)
{
	TreeNode<ItemType>* ls = tree->left;
	TreeNode<ItemType>* rs;

	switch (ls->bf)
	{
	case LH:
		tree->bf = ls->bf = EH;
		RotateRight(tree);
		taller = false;
		break;
	case EH:
		cerr << "The tree is already balanced" << endl;
		break;
	case RH:
		rs = ls->right;
		switch (rs->bf)
		{
		case LH:
			tree->bf = RH;
			ls->bf = EH;
			break;
		case EH:
			tree->bf = ls->bf = EH;
			break;
		case RH:
			tree->bf = EH;
			ls->bf = LH;
			break;
		default:
			break;
		}
		rs->bf = EH;
		RotateLeft(tree->left);
		RotateRight(tree);
		taller = false;
	default:
		break;
	}
}

template<class ItemType>
void RotateLeft(TreeNode<ItemType>*& tree)
{
	TreeNode<ItemType>* rs;

	if (tree == NULL)
	{
		cerr << "Cannot rotate an empty tree in RotateLeft" << endl;
	}
	else if (tree->right == NULL)
	{
		cerr << "Cannot make an empty subtree the root in RotateLeft" << endl;
	}
	else
	{
		rs = tree->right;
		tree->right = rs->left;
		rs->left = tree;
		tree = rs;
	}
}

template <class ItemType>
void RotateRight(TreeNode<ItemType>*& tree)
{
	TreeNode<ItemType>* ls;

	if (tree == NULL)
	{
		cerr << "Cannot rotate an empty tree in RotateRight" << endl;
	}
	else if (tree->left == NULL)
	{
		cerr << "Cannot make an empty subtree the root in RotateRight" << endl;
	}
	else
	{
		ls = tree->left;
		tree->left = ls->right;
		ls->right = tree;
		tree = ls;
	}
}


//
//template <class ItemType>
//void Insert(TreeNode<ItemType>*& tree, ItemType item, bool& taller);
//
//template <class ItemType>
//void RightBalance(TreeNode<ItemType>*& tree, bool& taller);
//
//template <class ItemType>
//void LeftBalance(TreeNode<ItemType>*& tree, bool& taller);
//
//template <class ItemType>
//void RotateLeft(TreeNode<ItemType>*& tree);
//
//template <class ItemType>
//void RotateRight(TreeNode<ItemType>*& tree);
