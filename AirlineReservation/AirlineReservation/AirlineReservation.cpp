// AirlineReservation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int displayMenu();
int main()
{
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			//doHire(employeeDB);
			break;
		case 2:
			//doFire(employeeDB);
			break;
		case 3:
			//doPromote(employeeDB);
			break;
		case 4:
			//employeeDB.displayAll();
			break;
		case 5:
			//employeeDB.displayCurrent();
			break;
		case 6:
			//employeeDB.displayFormer();
			break;
		default:
			//cerr << "Unknown command." << endl;
			break;
		}
	}
    return 0;
}

int displayMenu()
{
	int selection;

	cout << endl;
	cout << "Flight Reservation System" << endl;
	cout << "-----------------" << endl;
	cout << "1) Reserve a seat" << endl;
	cout << "2) Flight Schedule" << endl;
	cout << "3) Display passenger info" << endl;
	cout << "4) Flight details" << endl;
	cout << "5) User ticket infomation" << endl;
	cout << "6) Exit the program" << endl;
	cout << endl;
	cout << "---> ";

	cin >> selection;

	return selection;
}

