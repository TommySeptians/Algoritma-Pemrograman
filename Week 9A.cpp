#include <iostream>
using namespace std;

int main () {
	int X [10], cari;
	bool ketemu;
	
	for (int i = 0; i < 10; i++) {
		cout << "Masukkan Data : ";
		cin >> X [i];
	}
	
	cout << "Masukkan Data yang dicari : ";
	cin >> cari;
	
	for (int i = 0; i < 10; i++) {
		if (X [i] == cari) {
			ketemu = true;
			break;
		} else {
			ketemu = false;
		}
	}
	
	if (ketemu == true) {
		cout << "Data Ditemukan.";
	} else {
		cout << "Data Tidak Ditemukan.";
	}
	
	return 0;
}