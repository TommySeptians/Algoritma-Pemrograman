#include <iostream>
using namespace std;

int main () {
	// KAMUS
	string nama [30];
	// ALGORITMA
	for (int a = 0; a < 30; a++) {
		cin >> nama [a];
	}
	for (int a = 1; a <= 15; a++) {
		cout << nama [a*2-2] << " - " << nama [a*2-1] << endl;
	}
	return 0;
}