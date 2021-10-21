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
		
		Car(unsigned int pId) {
			id=pId;
		}
		
		Car(unsigned int pId, string pBrand);
		Car(unsigned int pId, string pBrand, string pModel, string pColor, float pPrice, unsigned short int pPower, Date pDateOfProduction) {
			id=pId;
			brand=pBrand;
			model=pModel;
			color=pColor;
			power=pPower;
			price=pPrice;
			dateOfProduction=pDateOfProduction;		
		}
};

Car::getData() {
	cout << "Identyfikator: " << id << "\nMarka: " << brand << "\nModel: " << model
		 << "\nMoc: " << power << "\nCena: " << price << "PLN\nRocznik: " 
		 << dateOfProduction.yyyy << endl << endl;
}

Car::Car(unsigned int pId, string pBrand) {
	id=pId;
	brand=pBrand;
}

int main(){
	
	Car opel(10);
	opel.getData();
	
	Car fiat(11, "Fiat");
	fiat.getData();
	
	Car porsche(8, "Porsche", "Panamera", "Czarny", 1500000, 500, {1, 10, 2020});
	porsche.getData();
	
	return 0;
} 

