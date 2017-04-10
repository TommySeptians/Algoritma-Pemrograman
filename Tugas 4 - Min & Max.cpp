#include <iostream>
using namespace std;

void pilihanA ();
void pilihanB ();

int banyak, n, nilai, muncul = 0;

int main () {
	char kode;
	cout << "Tentukan Pilihan Nilai (A/B): ";
	cin >> kode;
	switch (kode) {
		case 'A' :
			pilihanA ();
			break;
		case 'B' :
			pilihanB ();
			break;
		default :
			cout << "Anda Salah Memasukkan Pilihan.\n\n";
			main ();
			break;
	}
	return 0;
}

void pilihanA () {
	int min = 2147483647;
	cout << "Masukkan Banyaknya Nilai    : ";
	cin >> banyak;
	cout << endl;
	for (n = 1; n <= banyak; n++) {
		cout << "Masukkan Nilai Ke-" << n << "\t : ";
		cin >> nilai;
		if (nilai < min) {
			min = nilai;
			muncul = 1;
		}
		else if (nilai == min) {
			muncul++;
		}
	}
	if (banyak > 0) {
		cout << endl << "Nilai Minimum                    : " << min;
		cout << endl << "Banyaknya Kemunculan Nilai Min   : " << muncul;
	}
	else {
		cout << "Masukan Salah." << endl;
	}
}

void pilihanB () {
	int max = -2147483647;
	cout << "Masukkan Banyaknya Nilai    : ";
	cin >> banyak;
	cout << endl;
	for (n = 1; n <= banyak; n++) {
		cout << "Masukkan Nilai Ke-" << n << "\t : ";
		cin >> nilai;
		if (nilai > max) {
			max = nilai;
			muncul = 1;
		}
		else if (nilai == max) {
			muncul++;
		}
	}
	if (banyak > 0) {
		cout << endl << "Nilai Maksimum                   : " << max;
		cout << endl << "Banyaknya Kemunculan Nilai Maks  : " << muncul;
	}
	else {
		cout << "Masukan Salah." << endl;
	}
}