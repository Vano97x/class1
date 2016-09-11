// Example_Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Auto
{
private:
	char* Marka;
	char* Color;
	int Year;
public:
	Auto()
	{
		Marka = Color = nullptr;
		Year = 0;
	}
	Auto(char* mar, char* col, int yea)
	{
		strcpy(Marka, mar);
		strcpy(Color, col);
		Year = yea;
	}
	int getYear()
	{
		return Year;
	};
	char* getMarka()
	{
		char* rc = new char[strlen(Marka)];
		strcpy(rc, Marka);
		return rc;
	};
	char* getColor()
	{
		char* rc = new char[strlen(Color)];
		strcpy(rc, Color);
		return rc;
	}
	void setYear(int year)
	{
		if (year < 1890 || year > 2016)
		{
			cout << "¬ведите правильную дату" << endl;
			Year = 1891;
		}
		else Year = year;
	}
	void setMarka(char* marka)
	{
		if (!Marka) Marka = new char[strlen(marka)];
		strcpy(Marka, marka);
	}
	void setColor(char* color)
	{
		if (!Color) Color = new char[strlen(color)];
		strcpy(Color, color);
	}
	void print()
	{
		cout << "Marka: " << Marka << endl <<
			"Color: " << Color << endl <<
			"Year: " << Year << endl;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");
	Auto audi = Auto();
	cout << audi.getYear()<< endl;
	audi.setYear(20067);
	cout << audi.getYear() << endl;
	audi.setColor("Red");
	cout << audi.getColor() << endl;
	audi.setColor("blue");
	cout << audi.getColor() << endl;
	audi.setMarka("Audi");
	audi.print();
	system("pause");
	return 0;
}

