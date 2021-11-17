#include <iostream>
using namespace std;
int main (){
	
	/* 
	Muhammad Zidan Pasya
	2117051070
	*/
	
	//tipe data
	string variabel_nama;
	string variabel_goldar;
	double variabel_Beratbadan;
	double variabel_TinggiBadan;
	double variabel_bbi;
	
	//input
	cout << "Masukkan nama anda: ";
	getline(cin, variabel_nama);
	cout << "Masukkan golongan darah anda: ";
	getline(cin, variabel_goldar);
	cout << "Masukkan berat badan anda: ";
	cin>>variabel_Beratbadan;
	cout << "Masukkan tinggi badan anda: ";
	cin>>variabel_TinggiBadan;
	
	variabel_bbi = variabel_TinggiBadan - 100 - ((variabel_TinggiBadan - 100) * 10/100);
	
	//output
	cout<< endl
		<< "Nama              : " <<variabel_nama<< "\n"
		<< "Golongan Darah    : " <<variabel_goldar<< "\n"
		<< "Berat Badan       : " <<variabel_Beratbadan<< " kg \n"
		<< "Tinggi Badan      : " <<variabel_TinggiBadan<< " cm \n"
		<< "Berat badan Ideal : " <<variabel_bbi<< " kg \n";
	return 0;
}
