#include <iostream>
using namespace std;

long rekursiffaktorial (int f);

int main () {
	int x;
	int n = 4;
	cout << n << "! = " << rekursiffaktorial (n) << endl;
	
	n = 9;
	cout << n << "! = " << rekursiffaktorial (n) << endl;
	
	cout << "Masukkan Angka yang akan difaktorialkan : ";
	cin >> x;
	cout << x << "! = " << rekursiffaktorial (x) << endl;
	
	return 0;
}

long rekursiffaktorial (int f) {
	if (f == 0) {
		return 1;
	}
	else {
		return f * rekursiffaktorial (f - 1); // penghenti
	}
}