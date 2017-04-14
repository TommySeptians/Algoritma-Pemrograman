#include <iostream>
using namespace std;

	typedef struct {
		string noKA;
		string namaKA;
	} kereta;
	
	typedef struct {
		string nama;
		string ktp;
	} penumpang;

	typedef struct {
		int jam;
		int menit;
		int detik;
	} jam;
	
	typedef struct {
		string hari;
		string bulan;
		int tahun;
	} tanggal;
	
	typedef struct {
		string kotaAsalKA;
		string kotaTujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
		string harga;
	} jadwalKA;

int main () {
	penumpang Reni;
	kereta KA;
	jadwalKA tiket;
	
	KA.noKA = "BDO-Parahyangan-0103";
	KA.namaKA = "Parahyangan";
	
	tiket.tanggalBerangkat.hari = "Selasa, 31 ";
	tiket.tanggalBerangkat.bulan = "Januari ";
	tiket.tanggalBerangkat.tahun = 2018;
	
	tiket.waktuBerangkat.jam = 10;
	tiket.waktuBerangkat.menit = 15;
	tiket.waktuBerangkat.detik = 17;

	tiket.tanggalTiba.hari = "Rabu, 1 ";
	tiket.tanggalTiba.bulan = "Februari ";
	tiket.tanggalTiba.tahun = 2018;
	
	tiket.waktuTiba.jam = 01;
	tiket.waktuTiba.menit = 17;
	tiket.waktuTiba.detik = 33;
	
	cout << "Masukkan Nama   : ";
	cin >> Reni.nama;
	cout << "Masukkan No KTP : ";
	cin >> Reni.ktp;

	cout << "Tujuan          : ";
	cin >> tiket.kotaTujuanKA;
	cout << "Asal            : ";
	cin >> tiket.kotaAsalKA;	

	if (tiket.kotaTujuanKA == "Bandung" && tiket.kotaAsalKA == "Jogjakarta") {
		tiket.harga = "Rp. 137.000";
	}
	else if (tiket.kotaTujuanKA == "Bandung" && tiket.kotaAsalKA == "Surabaya") {
		tiket.harga = "Rp. 157.000";
	}
	else {
		tiket.harga = "Rp. 0";
	}
	
	cout << endl;
	cout << "============= DATA PERJALANAN =============" << endl;
	cout << "-------------------------------------------" << endl;
	
	cout << "No Kereta Api     : " << KA.noKA << endl;
	cout << "Nama Kereta Api   : " << KA.namaKA << endl << endl;
	
	cout << "Nama Penumpang    : " << Reni.nama << endl;
	cout << "No KTP            : " << Reni.ktp << endl << endl;
	
	cout << "Tujuan            : " << tiket.kotaTujuanKA << endl;
	cout << "Asal              : " << tiket.kotaAsalKA << endl << endl;
	
	cout << "Tanggal Berangkat : " << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl;
	cout << "Waktu             : " << tiket.waktuBerangkat.jam << " : " << tiket.waktuBerangkat.menit << " : " << tiket.waktuBerangkat.detik << " WIB" << endl << endl;
	
	cout << "Tanggal Tiba      : " << tiket.tanggalTiba.hari << tiket.tanggalTiba.bulan << tiket.tanggalTiba.tahun << endl;
	cout << "Waktu             : " << tiket.waktuTiba.jam << " : " << tiket.waktuTiba.menit << " : " << tiket.waktuTiba.detik << " WIB" << endl << endl;
		
	cout << "Biaya             : " << tiket.harga << endl;
	return 0;
}