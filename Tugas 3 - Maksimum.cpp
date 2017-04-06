#include <iostream>
using namespace std;

int maksimum (int a, int b);

int main () {
	int a, b;
	cout << "Masukkan Bilangan Pertama     : ";
	cin >> a;
	cout << "Masukkan Bilangan Kedua       : ";
	cin >> b;
	cout << "Bilangan yang Terbesar adalah : " << maksimum (a,b);
	return 0;
}

int maksimum (int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
