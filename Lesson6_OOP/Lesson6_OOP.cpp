#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1;
	Date d2(2026, 1, 1);

	d1++;
	d2--;
	d1.showDate();
	d2.showDate();


	cout << "------------------------------------------------\n";


	Date d3;
	cin >> d3;
	cout << d3 << endl;
	cout << d3 << " + " << 5 << " = " << d3 + 5 << endl;
	cout << 5 << " + " << d3 << " = " << 5 + d3 << endl;
}