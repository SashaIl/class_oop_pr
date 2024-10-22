#pragma once
#include <iostream>

using namespace std;
struct Name
{
	char* name = new char[21];
	char* surname = new char[21];
	char* middle_name = new char[21];
};

struct Birthday
{
	int day_birthday;
	int month_birthday;
	int year_birthday;
};


struct Institution
{
	char* name_educational_institution = new char[31];
	char* city_educational_institution = new char[21];
	char* country_educational_institution = new char[21];
	int num_group;
};


struct InfoAboutStudent
{
	char* numer = new char[16];
	char* city = new char[21];
	char* country = new char[21];
};


class Student
{
	

	Name nameS;
	Birthday birthS;
	Institution instS;
	InfoAboutStudent infoS;

	// SET //
public:

	~Student();
	Student(char* name, char* surname, char* middle_name, int day_birthday, int month_birthday, int year_birthday, char* name_ed, char* city_ed,
		char* country_ed, int num_group, char* numer, char* city, char* country) :

		nameS{ name ? new char[strlen(name)+1]:nullptr,surname ? new char[strlen(surname) + 1] : nullptr,middle_name ? new char[strlen(middle_name) + 1] : nullptr },
		birthS{ day_birthday,month_birthday,year_birthday },
		instS{ name_ed ? new char[strlen(name_ed) + 1] : nullptr,city_ed ? new char[strlen(city_ed) + 1] : nullptr,country_ed ? new char[strlen(country_ed) + 1] : nullptr },
		infoS{ numer ? new char[strlen(numer) + 1] : nullptr,city ? new char[strlen(city) + 1] : nullptr,country ? new char[strlen(country) + 1] : nullptr } {
	
		if (name) {
			strcpy_s(nameS.name, strlen(name), name);
		}

		if (surname) {
			strcpy_s(nameS.surname, strlen(surname), surname);
		}

		if (middle_name) {
			strcpy_s(nameS.middle_name, strlen(middle_name), middle_name);
		}

		if (name_ed) {
			strcpy_s(instS.name_educational_institution, strlen(name_ed), name_ed);
		}

		if (city_ed) {
			strcpy_s(instS.city_educational_institution, strlen(city_ed), city_ed);
		}

		if (country_ed) {
			strcpy_s(instS.country_educational_institution, strlen(country_ed), country_ed);
		}

		if (numer) {
			strcpy_s(infoS.numer, strlen(numer), numer);
		}
		if (city) {
			strcpy_s(infoS.city, strlen(city), city);
		}
		if (country) {
			strcpy_s(infoS.country, strlen(country), country);
		}

	}

	Student(char* name, char* surname, char* middle_name, int day_birthday, int month_birthday, int year_birthday, char* name_ed, char* city_ed,
		char* country_ed, int num_group, char* numer) :
		Student{
			nameS.name,nameS.surname,nameS.middle_name,
			birthS.day_birthday, birthS.month_birthday, birthS.year_birthday,
			instS.name_educational_institution, instS.city_educational_institution,instS.country_educational_institution, instS.num_group,
			infoS.numer, nullptr,nullptr } {}

	Student(char* name, char* surname, char* middle_name, int day_birthday, int month_birthday, int year_birthday, char* name_ed, char* city_ed,
		char* country_ed, int num_group) :
		Student{
			nameS.name,nameS.surname,nameS.middle_name,
			birthS.day_birthday, birthS.month_birthday, birthS.year_birthday,
			instS.name_educational_institution, instS.city_educational_institution,instS.country_educational_institution, instS.num_group,
			nullptr, nullptr,nullptr } {}

	Student(char* name, char* surname, char* middle_name, int day_birthday, int month_birthday, int year_birthday, char* name_ed, char* city_ed,
		char* country_ed) :
		Student{
			nameS.name,nameS.surname,nameS.middle_name,
			birthS.day_birthday, birthS.month_birthday, birthS.year_birthday,
			instS.name_educational_institution, instS.city_educational_institution,instS.country_educational_institution, 0,
			nullptr, nullptr,nullptr } {}

	Student(char* name, char* surname, char* middle_name, int day_birthday, int month_birthday, int year_birthday) :
		Student{
			nameS.name,nameS.surname,nameS.middle_name,
			birthS.day_birthday, birthS.month_birthday, birthS.year_birthday,
			nullptr, nullptr,nullptr, 0,
			nullptr, nullptr,nullptr } {}

	Student(char* name, char* surname, char* middle_name) :
		Student{
			nameS.name,nameS.surname,nameS.middle_name,
			0, 0,0,
			nullptr, nullptr,nullptr, 0,
			nullptr, nullptr,nullptr } {}

	Student(char* name, char* surname) :
		Student{
			nameS.name,nameS.surname,nullptr,
			0, 0,0,
			nullptr, nullptr,nullptr, 0,
			nullptr, nullptr,nullptr } {}

	Student() :
		Student{
			nullptr,nullptr,nullptr,
			0, 0,0,
			nullptr, nullptr,nullptr, 0,
			nullptr, nullptr,nullptr } {}

	void Show_all();


	void SetName_educational_institution(char* m);
	void SetCity_educational_institution(char* m);
	void SetCountry_educational_institution(char* m);
	void SetNum_group(int m);


	void SetFullName(char* m, char* n, char* k);

	void SetBirthday(int m, int n, int k);


	void SetNumer(char* m);
	void SetCity(char* m);
	void SetCountry(char* m);


	// GET //
	char* GetName_educational_institution();
	char* GetCity_educational_institution();
	char* GetCountry_educational_institution();
	int GetNum_group();
	char* GetName();
	char* GetSur_name();
	char* GetMiddle_name();
	int GetDay_birthday();
	int GetMonth_birthday();
	int GetYear_birthday();
	char* GetNumer();
	char* GetCity();
	char* GetCountry();
};

