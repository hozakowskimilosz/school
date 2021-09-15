#include <iostream>
using namespace std;

class Rectangle {
	public:
		float bok1;
		float bok2;
		
		float pole() {
			return bok1*bok2;
		}
		
		float obwod() {
			return bok1*2+bok2*2;
		}
		
		void showValues(float pole, float obwod) {
			cout << "Pole prostok¹tu to " << pole << ", a jego obwód wynosi " << obwod;
		}
};

int main() {
	setlocale(LC_CTYPE,"Polish");
	
	float a;
	float b;

	cout << "Podaj d³ugoœæ 1 boku: ";
	cin >> a;
	cout << "Podaj d³ugoœæ 2 boku: ";
	cin >> b;
		
	Rectangle obj;
		obj.bok1 = a;
		obj.bok2 = b;
		
	obj.showValues(obj.pole(), obj.obwod());
		
	return 0;
}
//essa
