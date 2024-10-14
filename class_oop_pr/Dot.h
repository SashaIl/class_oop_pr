#pragma once
#include <iostream>

class Dot
{

	double* Dot_x;
	double* Dot_y;
	double* Dot_z;

public:

	void save_to_file();

	~Dot();
	Dot();
	Dot(double x1, double x2,double x3, double y1, double y2, double y3);
	Dot(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
	void show_information();


	// GET //
	double* getDotX();
	double* getDotY();
	double* getDotZ();

	// SET //
	void setDotX(double x, double y, double z);
	void setDotY(double x, double y, double z);
	void setDotZ(double x, double y, double z);
};

