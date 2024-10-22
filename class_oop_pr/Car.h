#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Car
{
	string mark;
	string model;
	int yearCreate;
	char* s;
	static int count;
public:
	Car(string ma, string mo, int year, char* s1) :
		mark{ ma },
		model{ mo },
		yearCreate{ year },
		s{ s1 ? new char[strlen(s1) + 1] : nullptr } {
		
		if (s1) {
			strcpy_s(s, strlen(s1) + 1, s1);
		}
	}

	Car(string ma, string mo, int year) : Car{ ma,mo,year,nullptr } {}
	Car(string ma, string mo) : Car{ ma,mo,0,nullptr } {}
	Car(string ma) : Car{ ma,"Unknown",0,nullptr} {}
	Car() : Car{ "Unknown", "Unknown", 0,nullptr } {}

	void showCar();
	string getModel();
	string getMark();
	int getYear();

	void setModel(string m);
	void setMark(string m);
	void setYear(int m);

	static int get_count() {
		return count;
	}
	~Car();
};


