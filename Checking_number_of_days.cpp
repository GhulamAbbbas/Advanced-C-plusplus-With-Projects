// Checking_number_of_days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Year, Month:";
    cin >> year >> month;

	switch (month)
	{
	case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << " 29 Days month." : cout << " 28 days month."; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << " 30 Days month."; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 12: cout << " 31 days Month "; break;


	default:  cout << " Not valid";
		
	}
	system("pause>0");


}


