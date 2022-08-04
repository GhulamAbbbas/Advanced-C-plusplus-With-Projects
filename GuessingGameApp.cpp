// GuessingGameApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host:";
    cin >> hostUserNum;

    system(" cls");
    cout << "guest";
    cin >> guestUserNum; 

    (hostUserNum = guestUserNum)? cout << " correct": cout << " correct";
    
    
    //if (hostUserNum = guestUserNum)
    //    cout << " correct";
    //else
    //    cout << "failed";


    system("pause >0");
}

