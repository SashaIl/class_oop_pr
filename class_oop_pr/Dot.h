#pragma once
#include <iostream>

class Dot
{

	double* Dot_x = new double[3];
	double* Dot_y = new double[3];
	double* Dot_z = new double[3];

public:

	void save_to_file();

	~Dot();
	void show_information();


	// GET //
	double* getDotX();
	double* getDotY();
	double* getDotZ();

	// SET //
	void setDotX(int x, int y, int z);
	void setDotY(int x, int y, int z);
	void setDotZ(int x, int y, int z);
};

