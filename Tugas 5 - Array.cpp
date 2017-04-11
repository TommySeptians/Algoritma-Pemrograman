#include <iostream>
using namespace std;

int main () {
	int A = 0;
	char karakter [10];
	for (int x = 0; x < 10; x++) {
		cout << "Masukkan Karakter : ";
		cin >> karakter [x];
		if (karakter [x] == 'A') {
			A++;
		}
	}
	cout << "Banyaknya Elemen dengan Karakter A : " << A;
	return 0;
}