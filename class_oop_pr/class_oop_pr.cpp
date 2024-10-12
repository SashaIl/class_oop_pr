#include <iostream>
#include "Car.h"
#include "Student.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Car c1, c2;

    //c1.setMark("BMW");
    //c1.setModel("x5");
    //c1.setYear(2023);

    //c2.setMark("Renault");
    //c2.setModel("Megane");
    //c2.setYear(2024);

    //c1.showCar();
    //c2.showCar();


    Student student;
    
    char* name = new char[20];
    char* surname = new char[20];
    char* middle_name = new char[20];
    
    int day_birth;
    int month_birth;
    int year_birth;

    char* country = new char[20];
    char* city = new char[20];
    char* numer = new char[20];
    
    char* name_educational_institution = new char[20];
    char* city_educational_institution = new char[20];
    char* country_educational_institution = new char[20];
    int num_group;

    cout << "input your name - "; cin >> name;
    cout << "input your surname - "; cin >> surname;
    cout << "input your middle name - "; cin >> middle_name;

    cout << "input numer of your group - "; cin >> num_group;

    cout << "input your day of birth - "; cin >> day_birth;
    cout << "input your month of birth - "; cin >> month_birth;
    cout << "input your year of birth - "; cin >> year_birth;

    cout << "input country ​​of residence - "; cin >> country;
    cout << "input city of residence - "; cin >> city;
    cout << "input phone number - "; cin >> numer;

    cout << "name of the educational institution - "; cin >> name_educational_institution;
    cout << "city of the educational institution - "; cin >> city_educational_institution;
    cout << "country of the educational institution - "; cin >> country_educational_institution;


    student.SetFullName(name, surname, middle_name);
    student.SetNum_group(num_group);
    student.SetBirthday(day_birth, month_birth, year_birth);
    student.SetCountry(country);
    student.SetCity(city);
    student.SetNumer(numer);
    student.SetName_educational_institution(name_educational_institution);
    student.SetCountry_educational_institution(country_educational_institution);
    student.SetCity_educational_institution(city_educational_institution);

    student.Show_all();

    delete[] name;
    delete[] surname;
    delete[] middle_name;
    delete[] name_educational_institution;
    delete[] city_educational_institution;
    delete[] country_educational_institution;
    delete[] country;
    delete[] city;
    delete[] numer;
}
