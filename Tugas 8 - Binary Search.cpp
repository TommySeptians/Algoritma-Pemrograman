#include <iostream>
using namespace std;

int main () {
	int jumlah, cari, kiri, kanan, tengah;
	bool ketemu = false;
	
	cout << "Masukkan Panjang Array : ";
	cin >> jumlah;
	
	kiri = 1;
	kanan = jumlah;
	
	int angka [jumlah];
	
	for (int a = 0; a < jumlah; a++) {
		angka [a] = a + 1;
		cout << "Data ke-" << a + 1 << " : " << angka [a] << endl;
	}
	
	cout << "Masukkan Data yang dicari : ";
	cin >> cari;
	
	while (kiri <= kanan && ketemu == false) {
		tengah = (kiri + kanan) / 2;
		cout << kiri << tengah << kanan << endl;
		if (angka [tengah - 1] == cari) {
			ketemu = true;
		}
		else if (angka [tengah - 1] < cari) {
			kiri = tengah + 1;
		}
		else {
			kanan = tengah - 1;
		}
	}  
	
	if (ketemu == true) {
		cout << "Data Ditemukan.\n";
	}
	else {
		cout << "Data Tidak Ditemukan.\n";
	}
	
	return 0;
}