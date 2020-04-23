#include <iostream>
#include <string>
using namespace std;

struct data{
	string nama;
	long long int stambuk;
	string kelas;
};

void tampilan(struct data identitas)
{
	cout<<"Nama : "<<identitas.nama<<endl;
	cout<<"Stambuk : "<<identitas.stambuk<<endl;
	cout<<"Kelas : "<<identitas.kelas<<endl;
}

int main()
{
	data identitas_mhs;
	cout<<"Nama : "; cin>>identitas_mhs.nama;
	cout<<"Stambuk : "; cin>>identitas_mhs.stambuk;
	cout<<"Kelas : "; cin>>identitas_mhs.kelas;
	tampilan(identitas_mhs);
	
	return 0;
}
