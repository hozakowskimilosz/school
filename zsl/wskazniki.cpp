#include <iostream>
using namespace std;

class Worker {
	public:
		string name, surname;
		void getDate();
};

void Worker::getDate(){ //definicja metody
	cout << "Imie i nazwisko: " << name << " " << surname << endl;
}

int main(){

	Worker Kowalski;
	
	Worker *p_Kowalski;
	p_Kowalski = &Kowalski;
	
	cout << "Adres obiektu Kowalski: " << p_Kowalski << endl;
	p_Kowalski->name="Siema";
	Kowalski.getDate();
	p_Kowalski->getDate();
	
	return 0;
}

