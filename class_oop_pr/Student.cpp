#include "Student.h"
#include <iostream>
#include <cstring>






void Student:: SetName_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(instS.name_educational_institution, 20, m);
	}
	else cout << "eror";
}

void Student::SetCity_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(instS.city_educational_institution, 20, m);
	}
	else cout << "eror";

}

void Student::SetCountry_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(instS.country_educational_institution, 20, m);
	}
	else cout << "eror";
}

void Student::SetNum_group(int m) {
	instS.num_group = m;
}

void Student::SetFullName(char* m, char* n, char* k) {
	if ((m != nullptr && strlen(m) > 0) && (n != nullptr && strlen(n) > 0) && (k != nullptr && strlen(k) > 0)) {
		strcpy_s(nameS.name, 20, m);
		strcpy_s(nameS.surname, 20, n);
		strcpy_s(nameS.middle_name, 20, k);
	}
	else cout << "eror";

}

void Student::SetBirthday(int n, int m, int k){
	birthS.day_birthday = n;
	birthS.month_birthday = m;
	birthS.year_birthday = k;
}

void Student::SetNumer(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(infoS.numer, 20, m);
	}
	else cout << "eror";
}

void Student::SetCity(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(infoS.city,20, m);
	}
	else cout << "eror";
}

void Student::SetCountry(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(infoS.country,20, m);
	}
	else cout << "eror";
}

/////////////////////////////////////////////////////////



char* Student::GetName_educational_institution() {
	return instS.name_educational_institution;
}

char* Student::GetCity_educational_institution() {
	return instS.city_educational_institution;
}

char* Student::GetCountry_educational_institution() {
	return instS.country_educational_institution;
}

int Student::GetNum_group() {
	return instS.num_group;
}

char* Student::GetName() {
	return nameS.name;
}

char* Student::GetSur_name() {
	return nameS.surname;
}

char* Student::GetMiddle_name() {
	return nameS.middle_name;
}

int Student::GetDay_birthday() {
	return birthS.day_birthday;
}

int Student::GetMonth_birthday() {
	return birthS.month_birthday;
}

int Student::GetYear_birthday() {
	return birthS.year_birthday;
}

char* Student::GetNumer() {
	return infoS.numer;
}

char* Student::GetCity() {
	return infoS.city;
}

char* Student::GetCountry() {
	return infoS.country;
}
void Student:: Show_all() {
	cout << "\n\n";
	cout << "student name: " << (nameS.name ? nameS.name : "Unknown") << " " << (nameS.surname ? nameS.surname : "Unknown") << " " << (nameS.middle_name ? nameS.middle_name : "Unknown") << endl;
	cout << "group number: " << (instS.num_group ? instS.num_group : 0) << endl;
	
	
	if (birthS.day_birthday) {
	cout << "birthday : " << birthS.day_birthday << " " << birthS.month_birthday << " " << birthS.year_birthday<< " (dd.mm.yyyy)" << endl;
	}
	else {
		cout << "birthday : " << 0 << " " << 0 << " " << 0 << " (dd.mm.yyyy)" << endl;
	}


	if (birthS.day_birthday) {
		cout << "country - " << infoS.country << "\ncity - " << infoS.city << "\ntelefone - " << infoS.numer << endl;
	}
	else {
		cout << "country - " << "Unknown" << "\ncity - " << "Unknown" << "\ntelefone - " << "Unknown" << endl;
	}

	if (instS.name_educational_institution) {
		cout << "name educational institution: " << instS.name_educational_institution << endl;
		cout << "country educational institution: " << instS.country_educational_institution << endl;
		cout << "city educational institution: " << instS.city_educational_institution << endl;
	}
	else {
		cout << "name educational institution: " << "Unknown" << endl;
		cout << "country educational institution: " << "Unknown" << endl;
		cout << "city educational institution: " << "Unknown" << endl;
	}
	
}


//Student::Student() {
//	strcpy_s(nameS.name, 20, "nnnnnnnnnn");
//	strcpy_s(nameS.surname, 20, "ssssssssss");
//	strcpy_s(nameS.middle_name, 20, "mmmmmmmmmm");
//
//	instS.num_group = 0;
//	birthS.day_birthday = 1;
//	birthS.month_birthday = 1;
//	birthS.year_birthday = 1999;
//	strcpy_s(infoS.country, 20, "cccccccccc");
//	strcpy_s(infoS.city, 20, "cccccccccc");
//	strcpy_s(infoS.numer, 16, "123456789");
//	strcpy_s(instS.name_educational_institution, 20, "uuuuuuuuuu");
//	strcpy_s(instS.country_educational_institution, 20, "cccccccccc");
//	strcpy_s(instS.city_educational_institution, 20, "cccccccccc");
//}

Student::~Student() {
	delete[] nameS.name;
	delete[] nameS.surname;
	delete[] nameS.middle_name;

	delete[] instS.name_educational_institution;
	delete[] instS.city_educational_institution;
	delete[] instS.country_educational_institution;

	delete[] infoS.numer;
	delete[] infoS.city;
	delete[] infoS.country;
}