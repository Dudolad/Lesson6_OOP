#pragma once
#include "Date.h"
#include <string>
using namespace std;
class Product
{
    string title;
    float price;
    Date madeDate;
    int termSave;

public:
    Product();
    Product(string title, float price, Date madeDate, int termSave);

    void setTitle(string title);
    string getTitle()const;
    void setPrice(float price);
    float getPrice()const;
    int getTerm()const;
    Date getMadeDate()const;

    bool isExpired()const;
    friend ostream& operator << (ostream& out, const Product& obj);
    friend istream& operator >> (istream& in, Product& obj);

};

