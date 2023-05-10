#include <iostream>
using namespace std;

class MyClass {
	public:
		int myNum;
		void myMethod() {
			cout << "Hello World";
		}
		MyClass() {
			cout << "Hello World";
		}
};

// class Car : public Vehicle // how to inherit attributes and methods from another class

int main() {
	MyClass myObj;
	myObj.myNum = 15;
	myObj.myMethod();
	cout << myObj.myNum;
	return 0;
}