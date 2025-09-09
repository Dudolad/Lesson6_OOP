#include "Product.h"

Product::Product()
{
    title = "undefined";
    price = 0.0;
    madeDate = Date(2000, 1, 1);
    termSave = 0;
}

Product::Product(string title, float price, Date madeDate, int termSave)
{
    this->title = title;
    this->price = price;
    this->madeDate = madeDate;
    this->termSave = termSave;

}

void Product::setTitle(string title)
{
    if (title.size() >= 2)
    {
        this->title = title;
    }
}

string Product::getTitle() const
{
    return title;
}

void Product::setPrice(float price)
{
    if (price > 0)
    {
        this->price = price;
    }
}

float Product::getPrice() const
{
    return price;
}

int Product::getTerm() const
{
    return termSave;
}

Date Product::getMadeDate() const
{
    return madeDate;
}

bool Product::isExpired() const
{
    return madeDate + termSave < Date();
}

ostream& operator<<(ostream& out, const Product& obj)
{
    out << "Title: " << obj.title << endl;
    out << "Trice: " << obj.price << endl;
    out << "Made: " << obj.madeDate << endl;
    out << "Save: " << obj.termSave << endl;
    out << "Finish: " << obj.termSave + obj.madeDate << endl;
    if (obj.isExpired())
    {
        out << "PRODUCT IS EXPIRED!!!" << endl;
    }
    return out;
}

istream& operator>>(istream& in, Product& obj)
{
    cout << "Input title: ";
    getline(in, obj.title);
    cout << "Input price: ";
    in >> obj.price;
    cout << "Input made date: ";
    in >> obj.madeDate;
    cout << "Input term in days: ";
    in >> obj.termSave;
    return in;
}
