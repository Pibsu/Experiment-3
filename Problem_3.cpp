#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char arr[100];
	int x, y, temp, n;
	
	cout << "Please enter the number of characters that you wish to enter: "; cin >> n;
	for (x = 0; x < n; x++)
	{
		cout << "Enter a character: "; cin >> arr[x];
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n - x - 1; y++)
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
	for (x = 0; x <= n - 1; x++)
	{
		cout << arr[x];
	}
	cout << "\nThe array has a total of " << x << " elements.";
	getch();
	return 0;
}
