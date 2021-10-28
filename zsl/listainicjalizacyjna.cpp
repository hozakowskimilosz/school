#include <iostream>
using namespace std;
 
struct Date {
	int dd, mm, yyyy;
};
 
class Car{
	public: 
		unsigned int id;
		string brand, model;
 
		void getData();
		
		Car();
		Car(unsigned int id, string brand, string model);
};

Car::Car(): 
	id {0},
	brand {"MARKA"},
	model {"MODEL"}
{
	cout << "Konstruktor domyœlny";
}

Car::Car(unsigned int pId, string pBrand, string pModel):
	id {pId},
	brand {pBrand},
	model {pModel}
{
	cout << "Konstruktor parametryczny";
}
	
 
void Car::getData(){
	cout << "id: " << id << ", marka: " << brand << ", model: " << model << endl << endl;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");	
	
	Car fiat;
	fiat.getData();
	
	Car fiat1(10, "Fiat", "Panda");
	fiat1.getData();
	
	return 0;
}

