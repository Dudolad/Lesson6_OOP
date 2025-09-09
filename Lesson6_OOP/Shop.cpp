#include "Shop.h"

Shop::Shop()
{
	arr.push_back(Product("Milk", 50.90, Date(2025, 9, 1), 3));
	arr.push_back(Product("Crisps", 70.90, Date(2025, 2, 10), 100));
	arr.push_back(Product("Bread", 27.00, Date(2025, 5, 8), 4));

}

Product Shop::operator[](string title)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i].getTitle() == title)
		{
			return arr[i];
		}
	}
	return Product();
}

Product& Shop::operator[](int n)
{
	return arr[n];
}

void Shop::addProduct(Product p)
{
	arr.push_back(p);
}

float Shop::calcExpiredProducts() const
{
	return 0.0f;
}

void Shop::updateDiscountProducts()
{
}

void Shop::delExpiredProducts()
{
}

void Shop::showInfo() const
{
	cout << "Amount of products: " << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}
