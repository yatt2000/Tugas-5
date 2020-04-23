#include <iostream>
using namespace std;

struct data{
	string nama;
	long long int stambuk;
	string kelas;
};

main(){
	data x[3];
	
	for (int i=0; i<1; i++){
		cout<<"Nama\t : ";
		cin>>x[i].nama;
		cout<<"Stambuk\t : ";
		cin>>x[i].stambuk;
		cout<<"Kelas\t : ";
		cin>>x[i].kelas;
		cout<<"\n";
	}
	for (int i=0; i<1; i++){
		cout<<"Inputan yang Sudah Masuk\n\n";
		cout<<"Nama\t : "<<x[i].nama<<endl;
		cout<<"Stambuk\t : "<<x[i].stambuk<<endl;
		cout<<"Kelas\t : "<<x[i].kelas<<endl<<endl;
	}
	return 0;
}
