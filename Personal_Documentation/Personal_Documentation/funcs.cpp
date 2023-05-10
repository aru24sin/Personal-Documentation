#include <iostream>
using namespace std;

void myFunction(string fname) {
	cout << fname << " Doe" << endl;
}

int myFunc2(int x) {
	return 5 + x;
}

void foo() {
	myFunction("John");
	cout << myFunc2(3);
}