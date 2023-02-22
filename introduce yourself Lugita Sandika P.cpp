#include<iostream>
using namespace std;
int main(){
	string nama;
	string kelas;
	string nilai;
	cout<< "izin memperkenalkan nama saya  ";
	getline(cin,nama);
	cout<< "Saya mahasiswa S1 Ilmu Komputer dari kelas ";
	getline(cin,kelas);
	cout<< "Nilai DDP saya adalah ";
	getline(cin,nilai);
	cout << endl;
	
	return 0;
}
