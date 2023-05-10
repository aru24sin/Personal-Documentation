#include <iostream>;
using namespace std;

void run(int x, int y) {
	x++;
	y++;
	cout << x << endl << y;
}

bool men(int x, int y) {
	if (x == y) {
		return true;
	}
	else {
		return false;
	}
}

void foo() {
	int x;
	int y;
	bool tf;
	cout << "Input x: "; cin >> x;
	cout << "Input y: "; cin >> y;
	run(x,y);
	tf = men(x, y);
	cout << tf;
}