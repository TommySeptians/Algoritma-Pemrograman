#include <iostream>
using namespace std;

int main () {
	int x, y;
	
	cout << "Masukkan Banyaknya Baris : ";
	cin >> x;
	cout << "Masukkan Banyaknya Kolom : ";
	cin >> y;
	cout << endl;
	
	int M [x] [y];
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << "Masukkan Nilai di Baris ke-" << i+1 << " dan Kolom ke-" << j+1 << " : ";
			cin >> M [i] [j];
		}
	}
	
	cout << endl;
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << M [i] [j] << '\t';
		}
		cout << endl;
	}
	return 0;
}