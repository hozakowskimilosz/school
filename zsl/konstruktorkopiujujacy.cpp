#include <iostream>
using namespace std;
 
class Rectangle {
	private:
		double sidea;
		double sideb;
	
	public:
		Rectangle();
		Rectangle(double sidea, double sideb);
		Rectangle(const Rectangle&);
		
	void catchSide(double&, double&);
	void setSide(double, double);
	double area();
	double circuit();
};

Rectangle::Rectangle(){
	cout << "\nKonstruktor domyœlny" << endl;
};

Rectangle::Rectangle(double pSidea, double pSideb) {
	sidea=pSidea;
	sideb=pSideb;
	cout << "\nKonstruktor parametryczny" << endl;
};

Rectangle::Rectangle(const Rectangle& model) {
	sidea=model.sidea;
	sideb=model.sideb;
	cout << "\nKonstruktor kopiujacy" << endl;
};
		
void Rectangle::catchSide(double&pSidea, double&pSideb) {
	pSidea=sidea;
	pSideb=sideb;
};

void Rectangle::setSide(double pSidea, double pSideb) {
	sidea=pSidea;
	sideb=pSideb;
};

double Rectangle::area() {
	return sidea*sideb;
};

double Rectangle::circuit() {
	return (2*sidea)+(2*sideb);
};

Rectangle copyRectangle(Rectangle rectangle) {
	return rectangle;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	double a, b;
	
	cout << "Pierwszy prostokat" << endl;
	Rectangle prostokat1(2, 4);
	prostokat1.catchSide(a, b);
	cout << "Bok a wynosi: " << a << endl;
	cout << "Bok b wynosi: " << b << endl;
	
	cout << "\nDrugi prostokat" << endl;
	Rectangle prostokat2=prostokat1;
	prostokat2.catchSide(a, b);
	cout << "Bok a wynosi: " << a << endl;
	cout << "Bok b wynosi: " << b << endl;
	
	cout << "\nTrzeci prostokat" << endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.catchSide(a, b);
	cout << "Bok a wynosi: " << a << endl;
	cout << "Bok b wynosi: " << b << endl;
	
	cout << "\nCzwarty prostokat" << endl;
	Rectangle prostokat4;
	prostokat4=copyRectangle(prostokat1);
	prostokat4.catchSide(a, b);
	cout << "Bok a wynosi: " << a << endl;
	cout << "Bok b wynosi: " << b << endl;
	
	return 0;
}

