#include <iostream>
using namespace std;

int main () {
	// KAMUS
	string nama[3];
	// ALGORITMA
	for (int a = 0; a < 3; a++) {
		cin >> nama[a];
	}
		cout << nama[0] << " - " << nama[1] << endl;
		cout << nama[0] << " - " << nama[2] << endl;
		cout << nama[1] << " - " << nama[2] << endl;
	return 0;
}