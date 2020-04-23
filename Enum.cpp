#include <iostream>
using namespace std;
#include <conio.h>

enum hari{Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Ahad};

int main()
{
      hari h1,h2;
      int selisih_hari;

      h1 = Ahad;
      h2 = Jumat;

      cout<<"Tipe ENUM C++"<<endl;
      cout<<"-------------"<<endl;
      cout<<"nilai h1 = Ahad"<<endl;
      cout<<"nilai h2 = Jumat"<<endl;
      cout<<"\nSelisih kedua Hari di atas adalah "<<h1-h2<<endl;

      return 0;
}
