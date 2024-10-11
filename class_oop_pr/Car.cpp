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