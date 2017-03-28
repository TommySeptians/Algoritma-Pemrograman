#include <iostream>
#include <iomanip>
using namespace std;

// prototype
	void	prosesMasuk ();
	void	jumlahMahasiswa ();
	void	inputMahasiswa ();
    char*	namaMahasiswa (int a);
	float	nilaiMahasiswa (int a);
	bool	isWithinRange (int a);
	void	tampilData();
	
// variabel global
	int		mhs = 5, a, b;
	char	nama  [5][20];
	float	nilai [5];
	float	X;
	bool	cek;
	
// program utama
int main () {
	prosesMasuk ();
//	jumlahMahasiswa ();
	inputMahasiswa ();
	tampilData ();
	return 0;
}

void prosesMasuk () {
	int masuk;
	do {
		cout << "Masukkan Nilai (-999) : ";
		cin  >> masuk;
	}
	while (masuk != -999);
	cout << endl;
}

void jumlahMahasiswa () {
	cout << "Masukkan Jumlah Mahasiswa : ";
	cin  >> mhs;
	cout << endl;
}

void inputMahasiswa () {
//	nama  [mhs][20];
//	nilai [mhs];	
	for (a = 0; a < mhs; a++) {
	cout << "Masukkan Data Ke-" << a+1 << "." << endl;
	cout << "Nama Mahasiswa : ";
	cin  >> nama [a];
	namaMahasiswa(a);
	cout << "IP Mahasiswa   : ";
	cin  >> nilai [a];
	cout << endl;
	nilaiMahasiswa(a);
	}
}

char* namaMahasiswa (int a) {
	return nama [a];
}

float nilaiMahasiswa (int a) {
	return nilai [a];
}

bool isWithinRange (int a) {
	int min = 0;
	int max = 4;
	X = nilaiMahasiswa(a);
	cek = X >= min && X <= max;
	return cek; 
}

void tampilData () {
//	nama  [mhs][20];
//	nilai [mhs];
	float b = 0, c;
	cout << "===================================================" << endl;
	cout << "=            Daftar Nilai IP Mahasiswa            =" << endl;
	cout << "===================================================" << endl;
	cout << "=     Nama Mahasiswa     =  IP  =      Hasil      =" << endl;
	cout << "===================================================" << endl;
	for (a = 0; a < mhs; a++) {
		X = nilaiMahasiswa(a);
		cout << "=  " << setiosflags(ios::left)  << setw(22) << namaMahasiswa (a);
		cout << "= "  << setiosflags(ios::fixed) << setprecision(2);
		if (!isWithinRange(a)) {
			X = 0.00;
			cout << X << " =   Tidak Valid";
		}
		else {
			cout << X << " =   ";
			if (X >= 2.75) {
				cout << "   Lulus   ";
			}
			else {
				cout << "Tidak Lulus";
			}
		}
		cout << "   =" << endl;
		b = b + X;
		c = b / (a+1);
	}
	cout << "===================================================" << endl;
	cout << "=      Rata-rata IP      = ";
	cout << setiosflags(ios::fixed) << setprecision(2) << c << " = ";
	if (c == 0) {
		cout << "Tidak Ada Data.";
	}
	else {
		cout << "               ";
	}
	cout << " =" << endl;
	cout << "===================================================" << endl;
}