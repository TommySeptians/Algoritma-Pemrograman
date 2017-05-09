#include <iostream>
using namespace std;

int main () {
	int ukuranX, i = 0;
	int s;
	
	cout << "Masukkan Ukuran Array : ";
	cin >> ukuranX;
	
	int X [ukuranX];
	
	for (int j = 0; j < ukuranX; j++) {
		cout << "Masukkan Data Ke-" << j + 1 << " : ";
		cin >> X [j];
	}
	
	cout << "Masukkan Data yang Dicari : ";
	cin >> s;
	
	while (i < ukuranX && X[i] != s) {
		i++;
	}
	
	if (X[i] == s) {
		cout << "Data Ditemukan Pada Indeks Ke-" << i << endl;
	} else {
		cout << "Data Tidak Ditemukan" << endl;
	}
	
	return 0;
}