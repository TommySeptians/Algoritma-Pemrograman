#include <iostream>
using namespace std;

int main () {
	int i, k, temp, X [100];
	
	for (i = 0; i < 100; i++) {
		X [i] = i + 1;
	}
	
	for (i = -1; i < 98; ++i) {
		for (k = 99; k > i + 1; --k) {
			if (X [k] > X [k-1]) {
				temp = X [k];
				X [k] = X [k-1];
				X [k-1] = temp;
			}
		}
	}
	
	for (i = 0; i < 100; ++i) {
		cout << X [i] << endl;
	}
	
	return 0;
}