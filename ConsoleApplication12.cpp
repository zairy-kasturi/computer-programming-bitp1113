// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void star();

int main()
{
	float  price = 9.90, totalprice;
	int quantity, DISC = 10;

	cout << "Quantity : " << endl;
	cin >> quantity;
	totalprice = (price*quantity)*(100 - DISC) / 100.00;
	star();
	cout << "Total price is : RM " << totalprice << endl;
}
void star() {
	cout << "This is lab 4" << endl;
	cout << "zairy, Do Exercise" << endl;

}



