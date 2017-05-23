#include <iostream>
using namespace std;

int main () {
	int i, k, temp, X [] = {7, 11, 16, 70, 3, 1, 6, 9, 18, 23};
	
	for (i = -1; i < 8; ++i) {
		for (k = 9; k > i + 1; --k) {
			if (X [k] < X [k-1]) {
				temp = X [k];
				X [k] = X [k-1];
				X [k-1] = temp;
			}
		}
	}
	
	for (i = 0; i < 10; ++i) {
		cout << X [i] << endl;
	}
	
	return 0;
}