#include <iostream>
using namespace std;

int main () {
	int x, A = 0;
	char karakter [10];
	for (x = 0; x < 10; x++) {
		cout << "Masukkan Karakter : ";
		cin >> karakter [x];
		if (karakter [x] == 'A') {
			A++;
		}
	}
	for (x = 0; x < 10; x++) {
		cout << "\nKarakter Ke-" << x+1 << "\t : ";
		cout << karakter [x];
	}
	cout << "\nBanyaknya Elemen dengan Karakter A : " << A;
	return 0;
}
