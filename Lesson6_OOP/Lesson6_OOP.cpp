#include <iostream>
#include "Date.h"
#include "Product.h"; 
#include <iomanip>
using namespace std;

int main()
{
	Date d1;
	Date d2(2026, 1, 1);

	Product a;
	cin >> a;
	
	cout << "------------------------------------------------\n";

	Product b("Milk", 50.90, Date(2025, 9, 1), 3);
	cout << a << endl << b;

	/*d1++;
	d2--;
	d1.showDate();
	d2.showDate();


	cout << "------------------------------------------------\n";


	Date d3;
	cin >> d3;
	cout << d3 << endl;
	cout << d3 << " + " << 5 << " = " << d3 + 5 << endl;
	cout << 5 << " + " << d3 << " = " << 5 + d3 << endl;*/
}