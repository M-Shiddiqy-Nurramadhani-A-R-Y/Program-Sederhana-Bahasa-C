#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int b1,b2,b3;

cout <<"---------------------------------------------------------------------------"<<endl;
cout <<"_Program Menentukan Bilangan Terkecil Dari 3 Buah Bilangan Yang Diinputkan_"<<endl;
cout <<"---------------------------------------------------------------------------"<<endl<<endl;

cout <<"Masukan bilangan ke 1 : ";  cin>>b1;
cout <<"Masukan bilangan ke 2 : ";  cin>>b2;
cout <<"Masukan bilangan ke 3 : ";  cin>>b3;
cout <<endl;

if(b1<b2)
    cout <<"Bilangan terkecilnya adalah "<<b1<<endl;

else if(b2<b3)
    cout <<"BIlangan terkecilnya adalah "<<b2<<endl;

else
    cout <<"Bilangan terkecilnya adalah "<<b3<<endl;

getch();
return 0;
}
