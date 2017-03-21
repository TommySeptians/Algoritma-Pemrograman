#include <iostream>
using namespace std;

int main () {
	// variabel
	int a, b, temp;
	
	// proses membaca
	cout << "Masukkan Nilai A : ";
	cin >> a;
	
	cout << "Masukkan Nilai B : ";
	cin >> b;
	
	// proses tukar
	temp = b;
	b = a;
	a = temp;
	
	// proses tampil
	cout << "========================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b << endl;
	
	return 0;
}