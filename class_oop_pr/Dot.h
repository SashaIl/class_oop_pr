#pragma once
#include <iostream>
using namespace std;

class Dot
{

	double x1;
	double x2;

	double y1;
	double y2;

	static int count;

public:

	void save_to_file();


	Dot(double x1_f, double y1_f, double x2_f, double y2_f) :
		x1{ x1_f },
		y1{ y1_f },
		x2{ x2_f },
		y2{ y2_f } {
		count += 1;
	}

	Dot(double x1_f, double y1_f) : Dot{ x1_f,y1_f,0,0 } {}

	Dot() : Dot{ 0,0,0,0 } {}

	void show_information();


	// GET //
	double getDotX1();
	double getDotY1();
	double getDotX2();
	double getDotY2();
	// SET //
	void setDotA(double x1_f, double y1_f);
	void setDotB(double x2_f, double y2_f);


	static int get_count() {
		return count;
	}
};

