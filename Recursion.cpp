#include <iostream>

//outputs a (b*2) times
void DisplayRowOfIntegers(int a, int b);

using namespace std;
int main()
{
	//displays 1st no. times 2nd no * 2
    //outputs a (b * 2) times
	DisplayRowOfIntegers(2, 5);
}

void DisplayRowOfIntegers(int a, int b)
{
	if (b>0)
	{
		b--;
		cout << a << a;
		DisplayRowOfIntegers(a, b);
	}
	else 
	{
		return;
	}
	
}