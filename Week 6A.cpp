#include <iostream>
using namespace std;

bool genap (int n);

int main () {
	bool hasil = genap (10);
	cout << "Hasilnya adalah : " << hasil << endl;
	cout << "Hasilnya adalah : " << genap (10);
	return 0;
}

bool genap (int n) {
	return (n % 2 == 0);
}