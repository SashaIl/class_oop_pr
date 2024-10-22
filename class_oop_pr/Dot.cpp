#include "Dot.h"


//Dot::Dot() {
//	Dot_x = new double[3];
//	Dot_y = new double[3];
//	Dot_z = new double[3];
//	for (int i = 0; i < 3; i++) {
//		Dot_x[i] = 0;
//		Dot_y[i] = 0;
//		Dot_z[i] = 0;
//	}
//}
//Dot::Dot(double x1, double x2, double x3, double y1, double y2,double y3) {
//	Dot_x = new double[3];
//	Dot_y = new double[3];
//	Dot_z = new double[3];
//	
//	Dot_x[0] = x1;
//	Dot_x[1] = x2;
//	Dot_x[2] = x3;
//
//
//	Dot_y[0] = y1;
//	Dot_y[1] = y2;
//	Dot_y[2] = y3;
//
//	Dot_z[0] = 0;
//	Dot_z[1] = 0;
//	Dot_z[2] = 0;
//
//}
//Dot::Dot(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
//	Dot_x = new double[3];
//	Dot_y = new double[3];
//	Dot_z = new double[3];
//
//	Dot_x[0] = x1;
//	Dot_x[1] = x2;
//	Dot_x[2] = x3;
//
//
//	Dot_y[0] = y1;
//	Dot_y[1] = y2;
//	Dot_x[2] = y3;
//
//	Dot_z[0] = z1;
//	Dot_z[1] = z2;
//	Dot_z[2] = z3;
//}




// SET //

void Dot::setDotA(double x1, double y1){
	x1 = x1;
	y1 = y1;
}

void Dot::setDotB(double x2, double y2) {
	x2 = x2;
	y2 = y2;
}




// GET //

double Dot::getDotX1() {
	return x1;
}

double Dot::getDotY1() {
	return y1;
}
double Dot::getDotX2() {
	return x2;
}

double Dot::getDotY2() {
	return y2;
}




void Dot::save_to_file() {
	FILE* fin;
	fopen_s(&fin,"coordinates.txt", "w");
	if (!fin) {
		cout << "eror";
		return;
	}
	fprintf(fin, "coordinates of point x - %.2f %.2f \n", x1, y1);
	fprintf(fin, "coordinates of point x - %.2f %.2f \n", x2, y2);

	
	_fcloseall();
}

void Dot::show_information() {
	cout << "coordinates of point A - " << x1 << " " << y1 <<  endl;
	cout << "coordinates of point B - " << x2 << " " << y2 << endl;
}


int Dot::count = 0;