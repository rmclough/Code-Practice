// AVLTrees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;
int main()
{
	int input = 0, option = 0;
	
	TreeType<int> tree;
	
	/*int nums[] = {1,2,3,4,5,6,7};
	int numElements = sizeof(nums) / sizeof(nums[0]);*/
	//Print(nums, numElements);

	
	while (option != 3)
	{
		cout << "\nEnter an option\n1. Insert item to AVL tree\n2. Print AVL tree\n3. Exit\n";
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "Enter number to insert\n(Press -1 to stop)\n";
			while (input != -1)
			{
				cin >> input;
				if (input != -1)
					tree.InsertItem(input);

			}
			input = 0;
			break;
		}

		case 2:
		{
			ofstream file("file.txt");
			
			cout << "AVL tree\n";
			tree.PrintTree(file);
			
			file.close();
			
			ifstream infile("file.txt", ios::in);
			string x;
			
			while (getline(infile, x))
			{
				cout << x;
			}
			
			infile.close();
			break;
		}

		case 3:
		{
			cout << "You have exited\n";
			break;
		}

		default:
			cout << "Not a valid option\n";
			break;
		}
		
	}
	

	return 0;
}
//file.open("file.txt", ios::out);
/*if (file.is_open())
			{
				cout << "AVL tree\n";
				tree.PrintTree(file);

			}

			else
			{
				cout << "File not open\n";
				break;
}*/
			//infile.open("file.txt");
/*if (infile.is_open())
			{
				while (getline(infile, x))
				{
					cout << x;
				}

			}
			else
cout << "File not open\n";*/
//file.close();

		//file.open("file.txt", ios::out | ios::in);
		/*if (file.is_open())
		{

		}
		else
		{
			cout << "File not open\n";
			break;
}*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
