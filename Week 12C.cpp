#include <iostream>
using namespace std;

int main () {
	int i, k, temp, n;
	
	cout << "Jumlah Elemen : ";
	cin >> n;
	
	int X [n];
	
	for (i = 0; i < n; i++) {
		cin >> X [i];
	}
	
	for (i = -1; i < n - 2; ++i) {
		for (k = n - 1; k > i + 1; --k) {
			if (X [k] < X [k-1]) {
				temp = X [k];
				X [k] = X [k-1];
				X [k-1] = temp;
			}
		}
	}
	
	for (i = 0; i < n; ++i) {
		cout << X [i] << endl;
	}
	
	return 0;
}