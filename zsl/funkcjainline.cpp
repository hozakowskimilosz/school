#include <iostream>
using namespace std;

class Rectangle {
	public:
		float sidea, sideb;
		
	inline float inline_area(float sidea, float sideb){
		return sidea*sideb;
	}
	
	inline float inline_circuit(float sidea, float sideb){
		return 2*sidea+2*sideb;
	}
	
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Rectangle prostokat;
	cout << "Pole prostok¹ta wynosi: " << prostokat.inline_area(2, 4) << "cm^2";
	cout << "\nObwód prostok¹ta wynosi: " << prostokat.inline_circuit(2, 4) << "cm";
	
	return 0;
}

