#include <iostream>;
using namespace std;

void vars() {
	int i = 5;
	float j = 4.0;
	double f = 8.99;
	string name = "Aru";
	char letter = 'a';
	int unknown;
	cout << i << endl << j << endl <<\
		f << endl<< name << endl << letter << endl; //how to output
	cout << "Input unknown: ";
	cin >> unknown; //how to input
	cout << endl << unknown;
	string txt = "hello";
	cout << txt.length();
	cout << txt[0];
	txt[0] = 'j';
}