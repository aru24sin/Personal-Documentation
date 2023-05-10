#include <iostream>
#include <cmath>
using namespace std;

void math(){
	int x;
	int y;
	double z;
	cout << "Input x: "; cin >> x;
	cout << "Input y: "; cin >> y;
	cout << "Input decimal for z: "; cin >> y;
	cout << "Max: " << max(x, y);
	cout << "Square Root of x: " << sqrt(x);
	cout << "rounded result of z: " << round(z);
	cout << "addition: " << x + y << endl;
	cout << "subtraction: " << x - y << endl;
	cout << "multiplication: " << x * y << endl;
	cout << "division: " << x / y << endl;
	cout << "modulos: " << x % y << endl; //can use this to check whether there is an odd or even number by doing x % 2 == 0 is even and == 1 is odd
}