#include <iostream>
#include <iomanip>
using namespace std;

// versi 1.00

// prototype
void inputNilai ();
void tampilNilai ();
float isWithinRange (float X, int max, int min);

// variabel global
int success = 0, failed = 0, valid = 0, max, min;
float sum, average, X;

// program utama
int main () {
	inputNilai ();
	tampilNilai ();
	return 0;
}

void inputNilai () {
	do {
		cout << "Masukkan Nilai : ";
		cin >> X;
		isWithinRange (X, 4, 0);
	}
	while (X != -999);
}

void tampilNilai () {
	average = sum / valid;
	cout << "Jumlah Data Nilai Mahasiswa       : " << valid << "\t Orang\n";
	cout << "Jumlah Mahasiswa yang Lulus       : " << success << "\t Orang\n";
	cout << "Jumlah Mahasiswa yang Tidak Lulus : " << failed << "\t Orang\n";
	cout << "Rata-rata Nilai IP Mahasiswa      : ";
	if (valid != 0) {
		cout << setiosflags(ios::fixed) << setprecision(2) << average << endl;
	}
	else {
		cout << "Tidak ada data.\n";
	}
}

float isWithinRange (float X, int max, int min) {
	if (X >= min && X <= max) {
		if (X >= 2.75) {
			success++;
		}
		else {
			failed++;
		}
		valid++;
		sum = sum + X;
		cout << "Data berhasil dimasukkan.\n\n";
	}
	else {
		cout << "Data tidak valid.\n\n";
	}
	return (success, failed, valid, sum);
}
