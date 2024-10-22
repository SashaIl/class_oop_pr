#include "fraction.h"
using namespace std;

//Fraction::Fraction() {
//	numerator = 1;
//	denominator = 1;
//}
//
//Fraction::Fraction(int x, int y) {
//	if (y == 0) isValid = true;
//	else {
//		numerator = x;
//		denominator = y;
//	}
//}

void Fraction::print() {
	if (isValid) cout << "ErorDivisionZero";
	else cout << numerator << "/" << denominator << endl;
}
int Fraction::count = 0;