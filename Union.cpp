#include <iostream>
using namespace std;

union data{
	int a;
	int b;
};

int main(){
	data data_union;
	
	data_union.a=5;
	data_union.b=6;
	
	cout<<"data a : "<<data_union.a<<endl;
	cout<<"data b : "<<data_union.b<<endl;
	
	return 0;
}
