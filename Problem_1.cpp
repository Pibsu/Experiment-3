#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int x, y, temp;
	double avg, sum, num[10];
	
	for (x = 0; x < 10; x++)
	{
		cout << "Enter a number: "; cin >> num[x];
	}
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10 - x - 1; y++)
		{
			if (num[y] > num [y+1])
			{
				temp = num[y];
				num[y] = num[y+1];
				num[y+1] = temp;
			} 
		}
	}
	cout << "+++++++++++++++++++++++++\n \n";
	cout << "The numbers are:\n";
	for (x = 0; x < 9; x++)
	{
		cout << num[x] << ", ";
	}
	if (x = 9)
	{
		cout << num[x] << endl;
	}
		cout << "\nThe smallest number is: "<< num[0] << endl;
		cout << "The largest number is: " << num[9] << endl;
		sum = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];
		avg = sum / 10;
		cout << "The sum of the numbers is: " << sum << endl;
		cout << setprecision(2) << fixed << showpoint;
		cout << "The average value of the numbers is: " << avg << endl;
	getch();
	return 0;
}
