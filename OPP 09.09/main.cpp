#include <iostream>
using namespace std;

class Test {
	public:
		int a;
};

class Worker {
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int yearBirthday;
		float height;
		char gender;					
	void showNameSurname(){
		cout << "Imi� i nazwisko: " << name << " " <<surname;	
	};
	
	void showAllData();				
};

	void Worker::showAllData(){
		
		string genderDescription;
		switch(gender){
			case 'M':
				genderDescription = "M�czyzna";
				break;
			case 'W':
				genderDescription = "Kobieta";
				break;
			default:
				genderDescription = "-";
	    }
	    
		cout << "\n\n\Imi� i nazwisko: " << name << " " << surname << "\n"
		<< "\n\Narodowo��: " << nationality << "\n\nrok urodzenia: "
		<< yearBirthday << "\n\nwzrost: " << height << "\n\np�e�: "
		<< genderDescription;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Test newObject;
//	cout << newObject.a;

	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.yearBirthday=1998;
	pracownik.height=180;
	pracownik.gender='M';
	cout << pracownik.name << endl << endl;
	pracownik.showNameSurname();
	pracownik.showAllData();
	
	return 0;
}




