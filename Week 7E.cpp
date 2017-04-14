#include <iostream>
using namespace std;

int main () {
	// KAMUS
	string nama [10];
	// ALGORITMA
	for (int a = 0; a < 10; a++) {
		cin >> nama[a];
	}
	for (int a = 0; a < 10; a++) {
		cout << nama[a] << endl;
	}
	return 0;
}