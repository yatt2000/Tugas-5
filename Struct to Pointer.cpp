#include <iostream>
#include <string.h>
using namespace std;

struct data{
	long long int stambuk;
	string nama;
	string fakultas;
	string prodi;
};

int main(){
	struct data *identitas, biodata;
	biodata.stambuk=13020190224;
	biodata.nama="Dwi Ahmad Asri Hidayat";
	biodata.fakultas="Ilmu Komputer";
	biodata.prodi="Teknik Informatika";
	
	identitas=&biodata;
	
	cout<<"Stambuk\t\t\t : "<<identitas->stambuk<<endl;
	cout<<"Nama\t\t\t : "<<identitas->nama<<endl;
	cout<<"Fakultas\t\t : "<<identitas->fakultas<<endl;
	cout<<"Jurusan\t\t\t : "<<identitas->prodi<<endl;
	
	return 0;
}
