#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double provtempA[7], provtempB[7], provtempC[7];
	

	for (int x = 0; x < 7; x++)
	{
		cout << "Temperature on Province A on day " << x + 1 << ": "; cin >> provtempA[x];
	}
	cout << "===================================================\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Temperature on Province B on day " << x + 1 << ": "; cin >> provtempB[x];
	}
	cout << "===================================================\n";
	for (int x = 0; x < 7; x++)
	{
	cout << "Temperature on Province C on day " << x + 1 << ": "; cin >> provtempC[x];
	}
	cout << "===================================================\n"; 
	cout << "Temperatures in Province A in a week:\n\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << provtempA[x] << endl;
	}
	cout << "===================================================\n"; 
	cout << "Temperatures in Province B in a week:\n\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << provtempB[x] << endl;
	}
	cout << "===================================================\n"; 
	cout << "Temperatures in Province C in a week:\n\n";
	for (int x = 0; x < 7; x++)
	{
		cout << "Day "<< x + 1 << ": " << provtempC[x] << endl;
	}
	
	getch();
	return 0;
}
