// SortTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
template<class ItemType>
int maxIndex(ItemType values[], int startIndex, int endIndex);

template<class ItemType>
void SelectionSort(ItemType values[], int numValues);

template<class ItemType>
void InsertSort(ItemType numbers[], int n);

void Print(int numbers[], int n);

#include <iostream>
using namespace std;
int main()
{
	//Problem 1
	cout << "Problem 1\n\n";
    int a[] = { 20,45,3,56,71,17,8,33,90,2 };

	cout << "Original Array\n";
	Print(a, 10);

	cout << "\n\n";

	InsertSort(a, 10);
	cout << "InsertSort\n";
	Print(a, 10);

	cout << "\n\n";

	//Problem 2
	cout << "Problem 2\n\n";
	int b[] = { 20,45,3,56,71,17,8,33,90,2 };

	cout << "Original Array\n";
	Print(b, 10);

	cout << "\n\n";

	SelectionSort(b, 10);
	cout << "SelectSort Descending\n";
	Print(b, 10);

	cout << "\n\n";
}

//InsertSort
template<class ItemType>
void InsertSort(ItemType numbers[], int n)
{
	int min = numbers[0], p = 0;
	for (int i = 1; i < n; i = i + 1)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
			p = i;
		}
	}
	numbers[p] = numbers[0];
	numbers[0] = min;


	for (int i = 2; i < n; i = i + 1)
	{
		int x = numbers[i];
		int j = i;
		while (x < numbers[j - 1])
		{
			numbers[j] = numbers[j - 1];
			j = j - 1;
		}
		numbers[j] = x;
	}

}

//SelectionSort
template  <class ItemType>
int maxIndex(ItemType values[], int startIndex, int endIndex)
{
	int indexOfMax = startIndex;
	for (int index = indexOfMax + 1; index <= endIndex; index++)
	{
		if (values[index] > values[indexOfMax])
			indexOfMax = index;
	}
	return indexOfMax;
}

template  <class ItemType>
void SelectionSort(ItemType values[], int numValues)
{
	int endIndex = numValues - 1;
	for (int current = 0; current < endIndex; current++)
	{
		swap(values[current], values[maxIndex(values, current, endIndex)]);
	}
}

//Print Array
void Print(int numbers[], int n)
{
	for (int x=0; x<n; x++)
		cout << numbers[x] << " ";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
