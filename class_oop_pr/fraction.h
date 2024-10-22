#pragma once
#include <iostream>

class Fraction
{

	int numerator;
	int denominator;
	bool isValid = false;
	static int count;
public:
	Fraction(int x, int y) :
		numerator{ x },
		denominator{ y } {
	
		if (y == 0) isValid = true;
		count += 1;
	}
	
	Fraction() : Fraction{ 1,1 } {}
	
	static int get_count() {
		return count;
	}

	void print();

};

