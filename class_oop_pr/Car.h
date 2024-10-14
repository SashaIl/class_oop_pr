#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Car
{
	string mark;
	string model;
	int yearCreate;
	int* mas;
	char* s;
public:
	Car();
	Car(string ma, string mo, int year);
	Car(string ma, string mo, int year,char* s1);

	void showCar();
	string getModel();
	string getMark();
	int getYear();

	void setModel(string m);
	void setMark(string m);
	void setYear(int m);

	~Car();
};

