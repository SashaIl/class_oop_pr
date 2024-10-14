#include <iostream>
#include "Car.h"

void Car::showCar() {
	cout << model << " " << mark << " " << yearCreate << endl;

}

string Car::getModel() {
	return model;
}

string Car::getMark() {
	return mark;
}

int Car::getYear() {
	return yearCreate;
}

void Car::setModel(string m) {
	model = m;
}

void Car::setMark(string m) {
	mark = m;
}

void Car::setYear(int y) {
	yearCreate = y;
}

Car::Car(string ma, string mo,int year) {
	cout << "Constructor" << endl;
	mark = ma;
	model = mo;
	yearCreate = year;
	mas = new int[1];
}
Car::Car() {
	cout << "Constructor" << endl;
	mark = "BMW";
	model = "x5";
	yearCreate = 2020;
	mas = new int[1];
}

Car::Car(string ma, string mo, int year, char* s1) {
	cout << "Constructor" << endl;
	mark = ma;
	model = mo;
	yearCreate = year;
	mas = new int[1];
	s = new char[strlen(s1) + 1];
	strcpy_s(s, strlen(s1) + 1, s1);
}

Car::~Car() {
	cout << "destructor";
	delete[] mas;
	delete[] s;
}


