#include <iostream>
using namespace std;

int faktorial (int n);

int nilai;

int main () {
	cout << "Masukkan Nilai  : ";
	cin >> nilai;
	cout << "Hasil Faktorial : " << faktorial (nilai);
	return 0;
}

int faktorial (int n) {
	int hasil = 1;
	for(nilai; nilai >= 1; nilai--) {
		hasil = hasil * nilai;
	}
	return hasil;
}