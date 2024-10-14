#include "Dot.h"
using namespace std;


Dot::Dot() {
	Dot_x = new double[3];
	Dot_y = new double[3];
	Dot_z = new double[3];
	for (int i = 0; i < 3; i++) {
		Dot_x[i] = 0;
		Dot_y[i] = 0;
		Dot_z[i] = 0;
	}
}
Dot::Dot(double x1, double x2, double x3, double y1, double y2,double y3) {
	Dot_x = new double[3];
	Dot_y = new double[3];
	Dot_z = new double[3];
	
	Dot_x[0] = x1;
	Dot_x[1] = x2;
	Dot_x[2] = x3;


	Dot_y[0] = y1;
	Dot_y[1] = y2;
	Dot_y[2] = y3;

	Dot_z[0] = 0;
	Dot_z[1] = 0;
	Dot_z[2] = 0;

}
Dot::Dot(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
	Dot_x = new double[3];
	Dot_y = new double[3];
	Dot_z = new double[3];

	Dot_x[0] = x1;
	Dot_x[1] = x2;
	Dot_x[2] = x3;


	Dot_y[0] = y1;
	Dot_y[1] = y2;
	Dot_x[2] = y3;

	Dot_z[0] = z1;
	Dot_z[1] = z2;
	Dot_z[2] = z3;
}




// SET //

void Dot::setDotX(double x, double y, double z) {
	Dot_x[0] = x;
	Dot_x[1] = y;
	Dot_x[2] = z;
}

void Dot::setDotY(double x, double y, double z) {
	Dot_y[0] = x;
	Dot_y[1] = y;
	Dot_y[2] = z;
}

void Dot::setDotZ(double x, double y, double z) {
	Dot_z[0] = x;
	Dot_z[1] = y;
	Dot_z[2] = z;
}


// GET //

double* Dot::getDotX() {
	return Dot_x;
}

double* Dot::getDotY() {
	return Dot_y;
}

double* Dot::getDotZ() {
	return Dot_x;
}


void Dot::save_to_file() {
	FILE* fin;
	fopen_s(&fin,"coordinates.txt", "w");
	if (!fin) {
		cout << "eror";
		return;
	}
	for (int i = 0; i < 3; i++) {
		fprintf(fin, "coordinates of point x - %.2f %.2f %.2f\n", Dot_x[0], Dot_x[1], Dot_x[2]);
	}
	_fcloseall();
}

void Dot::show_information() {
	cout << "coordinates of point x - " << Dot_x[0] << " " << Dot_x[1] << " " << Dot_x[2] << endl;
	cout << "coordinates of point y - " << Dot_y[0] << " " << Dot_y[1] << " " << Dot_y[2] << endl;
	cout << "coordinates of point z - " << Dot_z[0] << " " << Dot_z[1] << " " << Dot_z[2] << endl;
}

Dot::~Dot() {
	delete[] Dot_x;
	delete[] Dot_y;
	delete[] Dot_z;
}