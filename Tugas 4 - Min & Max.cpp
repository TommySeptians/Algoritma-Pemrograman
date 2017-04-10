#include <iostream>
using namespace std;

void pilihanA ();
void pilihanB ();

int banyak, n, nilai, muncul = 0;

int main () {
	char kode;
	cout << "Masukkan Banyaknya Nilai    : ";
	cin >> banyak;
	if (banyak > 0) {
		pilihan: {
			cout << "Tentukan Pilihan Nilai (A/B): ";
			cin >> kode;
			cout << endl;
			switch (kode) {
				case 'A' :
				case 'a' :
					pilihanA ();
					break;
				case 'B' :
				case 'b' :
					pilihanB ();
					break;
				default :
					cout << "Anda Salah Memasukkan Pilihan.\n\n\n";
					cout << "Masukkan Banyaknya Nilai    : " << banyak << endl;
					goto pilihan;
					break;
			}
		}
	}
	else {
		cout << "\nMasukan Salah.";
	}
	cout << endl;
	return 0;
}

void pilihanA () {
	int min = 2147483647;
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
		cout << "\nNilai Minimum                    : " << min;
		cout << "\nBanyaknya Kemunculan Nilai Min   : " << muncul;
}

void pilihanB () {
	int max = -2147483647;
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
		cout << "\nNilai Maksimum                   : " << max;
		cout << "\nBanyaknya Kemunculan Nilai Maks  : " << muncul;
}
