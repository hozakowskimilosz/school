#include <iostream>
using namespace std;

class Worker {
	public:
		string name, surname;
		void getData();
};

void Worker::getData(){
	cout << "Imie i nazwisko: " << name << " " << surname << endl;
}

int main(){

	Worker *p_worker;
	p_worker=new Worker();
	
	p_worker->name="Siema";
	p_worker->surname="Nowak";
	
	p_worker->getData();
	
	delete p_worker;
	cout << p_worker;
	
	p_worker->getData();
	
	return 0;
}
 
