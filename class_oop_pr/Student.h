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
	

	Name name;
	Birthday birth;
	Institution inst;
	InfoAboutStudent info;

	// SET //
public:

	~Student();
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

