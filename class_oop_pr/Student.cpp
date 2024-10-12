#include "Student.h"
#include <iostream>
#include <cstring>






void Student:: SetName_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(inst.name_educational_institution, 20, m);
	}
	else cout << "eror";
}

void Student::SetCity_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(inst.city_educational_institution, 20, m);
	}
	else cout << "eror";

}

void Student::SetCountry_educational_institution(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(inst.country_educational_institution, 20, m);
	}
	else cout << "eror";
}

void Student::SetNum_group(int m) {
	inst.num_group = m;
}

void Student::SetFullName(char* m, char* n, char* k) {
	if ((m != nullptr && strlen(m) > 0) && (n != nullptr && strlen(n) > 0) && (k != nullptr && strlen(k) > 0)) {
		strcpy_s(name.name, 20, m);
		strcpy_s(name.surname, 20, n);
		strcpy_s(name.middle_name, 20, k);
	}
	else cout << "eror";

}

void Student::SetBirthday(int n, int m, int k){
	birth.day_birthday = n;
	birth.month_birthday = m;
	birth.year_birthday = k;
}

void Student::SetNumer(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(info.numer, 20, m);
	}
	else cout << "eror";
}

void Student::SetCity(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(info.city,20, m);
	}
	else cout << "eror";
}

void Student::SetCountry(char* m) {
	if (m != nullptr && strlen(m) > 0) {
		strcpy_s(info.country,20, m);
	}
	else cout << "eror";
}

/////////////////////////////////////////////////////////



char* Student::GetName_educational_institution() {
	return inst.name_educational_institution;
}

char* Student::GetCity_educational_institution() {
	return inst.city_educational_institution;
}

char* Student::GetCountry_educational_institution() {
	return inst.country_educational_institution;
}

int Student::GetNum_group() {
	return inst.num_group;
}

char* Student::GetName() {
	return name.name;
}

char* Student::GetSur_name() {
	return name.surname;
}

char* Student::GetMiddle_name() {
	return name.middle_name;
}

int Student::GetDay_birthday() {
	return birth.day_birthday;
}

int Student::GetMonth_birthday() {
	return birth.month_birthday;
}

int Student::GetYear_birthday() {
	return birth.year_birthday;
}

char* Student::GetNumer() {
	return info.numer;
}

char* Student::GetCity() {
	return info.city;
}

char* Student::GetCountry() {
	return info.country;
}
void Student:: Show_all() {
	cout << "student name: " << name.name << " " << name.surname << " " << name.middle_name << endl;
	cout << "group number: " << inst.num_group << endl;
	cout << "birthday :" << birth.day_birthday << " " << birth.month_birthday << " " << birth.year_birthday << endl;
	cout  << "country - " << info.country << "\ncity - " << info.city << "\ntelefone - " << info.numer << endl;
	cout << "name educational institution: " << inst.name_educational_institution << endl;
	cout << "country educational institution: " << inst.country_educational_institution << endl;
	cout << "city educational institution: " << inst.city_educational_institution << endl;
}

Student::~Student() {
	delete[] name.name;
	delete[] name.surname;
	delete[] name.middle_name;

	delete[] inst.name_educational_institution;
	delete[] inst.city_educational_institution;
	delete[] inst.country_educational_institution;

	delete[] info.numer;
	delete[] info.city;
	delete[] info.country;
}