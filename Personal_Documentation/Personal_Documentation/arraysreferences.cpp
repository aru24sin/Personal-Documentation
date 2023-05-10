#include <iostream>
using namespace std;

void arrsRefs() {
	string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	cout << cars[1] << endl;
	cars[0] = "Opel";
	cout << cars[0] << endl;
	for (int i = 0; i < 4; i++) {
		cout << cars[i] << endl;
	}
	string food = "Pizza";
	string& meal = food;
	cout << &food << endl; //get memory address of food variable
	string* ptr = &food; //pointer var named ptr that points to string var named food
}