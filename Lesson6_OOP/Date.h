#pragma once
#include <iostream>
using namespace std;

class Date
{
	int year;
	int month;
	int day;
public:
	//--------- ÊÎÍÑÒÐÓÊÒÎÐÈ òà ÄÅÑÒÐÓÊÒÎÐÈ ---------
	Date(); // Çà çàìîâ÷óâàííÿì - ïîòî÷íà äàòà
	Date(int year, int month, int day); // Ç ïàðàìåòðàìè - çàäàíà äàòà	

	bool isLeapYear()const; //Ïåðåâ³ðêà íà âèñîêîñíèé ð³ê
	int monthDays()const; //Ê³ëüê³ñòü äí³â çà ì³ñÿöåì
	void nextDate(); // Íàñòóïíà äàòà
	void prevDate(); // Ïîïåðåäíÿ äàòà

	//--------- ÀÊÑÅÑÎÐÈ ---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;

	void showDate()const;
	bool valid()const; // Ïåðåâ³ðêà äàòè íà êîðåêòí³ñòü


	//--------- ÎÏÅÐÀÒÎÐÈ ÏÎÐ²ÂÍßÍÍß ---------
	bool operator == (const Date& obj)const&;
	bool operator != (const Date& obj)const&;
	bool operator > (const Date& obj)const&;
	bool operator < (const Date& obj)const&;
	bool operator >= (const Date& obj)const&;
	bool operator <= (const Date& obj)const&;


	//--------- ÎÏÅÐÀÒÎÐÈ ÏÐÈÑÂÎªÍÍß ----------
	Date& operator += (int days); // äîäàòè days äí³â äî äàòè
	Date& operator -= (int days); // â³äíÿòè days äí³ â³ä äàòè
	Date& operator += (float months); // äîäàòè months ì³ñÿö³â äî äàòè
	Date& operator -= (float months); // â³äíÿòè months ì³ñÿö³ â³ä äàòè
	Date& operator += (long years); // äîäàòè years ðîê³â äî äàòè
	Date& operator -= (long years); // â³äíÿòè years ðîê³â â³ä äàòè

	//--------- ÀÐÈÔÌÅÒÈ×Í² ÎÏÅÐÀÒÎÐÈ ---------
	Date operator + (int days)const&;
	Date operator - (int days)const&;
	Date operator + (float months)const&;
	Date operator - (float months)const&;
	Date operator + (long years)const&;
	Date operator - (long years)const&;


	Date& operator -- ();
	Date operator -- (int);
	Date& operator ++ ();
	Date operator ++ (int);


	friend Date operator + (int days, const Date& a);
	friend Date operator - (int days, const Date& a);

	friend Date operator + (float months, const Date& a);
	friend Date operator - (float months, const Date& a);

	friend Date operator + (long years, const Date& a);
	friend Date operator - (long years, const Date& a);

	friend ostream& operator << (ostream& os, const Date& t);
	friend istream& operator >> (istream& is, Date& t);



};

