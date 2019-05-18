#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char arr[7];
	int x, y, temp;

	for (x = 0; x < 7; x++)
	{
		cout << "Enter a character: "; cin >> arr[x];
	}
	for (x = 0; x < 7; x++)
	{
		for (y = 0; y < 7 - x - 1; y++)
		{
			if (arr[y] > arr [y+1])
			{
				temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			} 
		}
	}
	cout << "+++++++++++++++++++++++++\n \n";
	cout << "The array's elements are:\n";
	for (x = 0; x <= 6; x++)
	{
		cout << arr[x];
	}
	cout << "\nThe array has a total of " << x << " elements.";
	getch();
	return 0;
}
