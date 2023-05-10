#include <iostream>
using namespace std;

void loops() {

	int day = 2;
	switch (day) {
		case 1:
			cout << "Saturday" << endl;
			break;
		case 2:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Weekend" << endl;
	}

	int i = 1;
	while (i < 6) {
		cout << i << "\n";
		i++;
	}

	do {
		cout << i << "\n";
		i++;
	} while (i < 6);

	for (int j = 0; j < 5; j++) {
		if (j == 4) {
			continue;
		}
		if (j == 5) {
			break;
		}
		cout << "Yes" << "\n";
	}


}