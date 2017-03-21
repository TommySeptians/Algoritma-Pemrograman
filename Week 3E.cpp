#include <iostream>
using namespace std;

// prototype
int tambahkan (int a, int b);
	
// program utama
int main () {
	int a,b;
	
	cout << "Masukkan Nilai A : ";
	cin >> a;
	cout << "Masukkan Nilai B : ";
	cin >> b;
	
	cout << " Hasil : " << tambahkan (a,b) << endl;
	return 0;
}

int tambahkan (int a, int b) {
		return a + b;
}