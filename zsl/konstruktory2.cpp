#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Car {
	public:
		unsigned int id;
		unsigned short int power;
		string brand, model, color;
		float price;
		Date dateOfProduction;
		
		getData();
		
		Car(unsigned int pId=3, string pBrand="Marka");
};

Car::getData() {
	cout << "Identyfikator: " << id << "\nMarka: " << brand << endl << endl;
}

Car::Car(unsigned int pId, string pBrand) {
	id=pId;
	brand=pBrand;
}

int main(){
	
	Car opel;
	opel.getData();
	
	Car fiat(15, "Fiat");
	fiat.getData();
	
	Car bmw=Car(12);
	bmw.getData();
	
	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="BMW";	
	wsk->getData();
	
	return 0;
} 

