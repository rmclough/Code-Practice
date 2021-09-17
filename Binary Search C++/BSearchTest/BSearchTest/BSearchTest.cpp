// BSearchTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
const int MAX_ITEMS = 18;
struct ListType
{
    int length;
    int info[MAX_ITEMS];
};

void BinarySearch(ListType list, int item, bool& found);
int ForgetfulBinarySearch(ListType list, int item, bool& found);
int REBinarySearch(ListType list, int item, bool& found);

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int choice = 0;
    bool found = false;
    ListType list = { 18, {40023, 40028, 40029, 40032, 40032, 40034, 40035, 40038, 40045, 40047, 40049, 40051, 40052, 40054, 40057,
                            40068, 40070, 40071} };

    cout << "Enter which search you want:\n1. BinarySearch\n2. ForgetfulBinarySearch\n3. REBinarySearch\n4. Exit\n";
    cin >> choice;
    while (choice != 4)
    {
        switch (choice)
        {
        case(1):
            cout << "Enter a number:\n";
            cin >> num;
            BinarySearch(list, num, found);
            cout << "Enter which search you want:\n1. BinarySearch\n2. ForgetfulBinarySearch\n3. REBinarySearch\n4. Exit\n";
            cin >> choice;
            break;
        case(2):
            cout << "Enter a number:\n";
            cin >> num;
            ForgetfulBinarySearch(list, num, found);
            cout << "Enter which search you want:\n1. BinarySearch\n2. ForgetfulBinarySearch\n3. REBinarySearch\n4. Exit\n";
            cin >> choice;
            break;
        case(3):
            cout << "Enter a number:\n";
            cin >> num;
            REBinarySearch(list, num, found);
            cout << "Enter which search you want:\n1. BinarySearch\n2. ForgetfulBinarySearch\n3. REBinarySearch\n4. Exit\n";
            cin >> choice;
            break;
        default:
            cout << "Invalid choice\n";
            cout << "Enter which search you want:\n1. BinarySearch\n2. ForgetfulBinarySearch\n3. REBinarySearch\n4. Exit\n";
            cin >> choice;
            break;
        }
    }
    cout << "You have exited";
    
    
}

void BinarySearch(ListType list, int item,
    bool& found)
{
    int counter = 0;
    int midPoint;
    int first = 0;
    int last = list.length - 1;
    bool moreToSearch = first <= last;
    found = false;
    while (moreToSearch && !found)
    {
        counter++;
        midPoint = (first + last) / 2;
        if (item < list.info[midPoint])
        {
            counter++;
            last = midPoint - 1;
            moreToSearch = first <= last;
        }
        else if (item > list.info[midPoint])
        {
            counter++;
            first = midPoint + 1;
            moreToSearch = first <= last;
        }
        else
        {
            counter++;
            item = list.info[midPoint];
            found = true;
        }
    }
    cout << "Binary search counter is: " << counter << "\n";
}

int ForgetfulBinarySearch(ListType list, int item, bool& found)
/* Post: If found the function returns to
position of item in list.info.
Otherwise it returns –1. */
{
    int counter = 0;
    int first = 0;
    int last = list.length - 1;
    int midPoint;
    found = false;
    while (first < last)
    {
        counter++;
        midPoint = (first + last) / 2;
        if (item > list.info[midPoint])
        {
            counter++;
            first = midPoint + 1;
        }

        else
        {
            counter++;
            last = midPoint;
        }
    }

    if (last == -1)
    {
        counter++;
        cout << "Forgetful binary search counter is: " << counter << "\n";
        return -1;
    }

    else if (item == list.info[first])
    {
        counter++;
        found = true;
        cout << "Forgetful binary search counter is: " << counter << "\n";
        return first;
    }
    else
    {
        counter++;
        cout << "Forgetful binary search counter is: " << counter << "\n";
        return -1;
    }

}

int REBinarySearch(ListType list, int item, bool& found)
/* Post: If found the function returns to
position of item in list.info.
Otherwise it returns –1. */
{
    int counter = 0;
    int first = 0;
    int last = list.length - 1;
    int midPoint;
    found = false;
    while (first <= last)
    {
        counter++;
        midPoint = (first + last) / 2;
        if (item == list.info[midPoint])
        {
            counter++;
            found = true;
            cout << "RE binary search counter is: " << counter << "\n";
            return midPoint;
        }
        else if (item > list.info[midPoint])
        {
            counter++;
            first = midPoint + 1;
        }
        else
        {
            counter++;
            last = midPoint - 1;
        }

    }
    cout << "RE binary search counter is: " << counter << "\n";
    return -1;
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
