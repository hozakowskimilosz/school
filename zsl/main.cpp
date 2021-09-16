#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, yyyy;
};

struct Student {
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	
	Student student {"Jan", "Siema", 100, {6, 9, 2000}, {4, 5, 3, 6, 4} };
	cout << "Imiê i nazwisko: " << student.name << " "
		 << student.surname << endl << "\nID: " << student.id << endl
		 << "\nData urodzenia: "
		 << student.dateBirthday.d << "-" << student.dateBirthday.m
		 << "-" << student.dateBirthday.yyyy << "r." << endl
		 << "\nOceny z informatyki: " << endl
		 << "\n1 ocena: " << student.gradeInformatics[0] << endl
		 << "\n2 ocena: " << student.gradeInformatics[1] << endl
		 << "\n3 ocena: " << student.gradeInformatics[2] << endl
		 << "\n4 ocena: " << student.gradeInformatics[3] << endl
		 << "\n5 ocena: " << student.gradeInformatics[4] << endl;
		 
	return 0;
} 

