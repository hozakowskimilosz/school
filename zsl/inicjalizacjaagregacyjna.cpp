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
};
 
void Car::getData(){
	cout << "id: " << id << ", marka: " << brand << ", model: " << model << endl << endl;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	Car fiat {10};
	fiat.getData();	
	
	Car fiat1 {10, "Fiat"};
	fiat1.getData();
	
	Car fiat2 {10, "Fiat", "Panda"};
	fiat2.getData();
	
	return 0;
}

