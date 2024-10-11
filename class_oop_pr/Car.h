#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Car
{
	string mark;
	string model;
	int yearCreate;
public:
	void showCar();
	string getModel();
	string getMark();
	int getYear();

	void setModel(string m);
	void setMark(string m);
	void setYear(int m);

};

