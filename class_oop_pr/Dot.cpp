#include "Dot.h"
using namespace std;


// SET //

void Dot::setDotX(int x, int y, int z) {
	Dot_x[0] = x;
	Dot_x[1] = y;
	Dot_x[2] = z;
}

void Dot::setDotY(int x, int y, int z) {
	Dot_y[0] = x;
	Dot_y[1] = y;
	Dot_y[2] = z;
}

void Dot::setDotZ(int x, int y, int z) {
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