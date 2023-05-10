#include <iostream>
using namespace std;

void conds() {
	int i = 5;
	int j = 4;
	if(i>j){
		cout << "I is greater" << endl;
	}
	else{
		cout << "J is greater" << endl;
	}
	int time = 20;
	string result = (time < 18) ? "Good day" : "Good evening";
	cout << result;
}