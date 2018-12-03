#include <iostream>
#include <conio.h>>

using namespace std;

int main()
{
int pembilang,penyebut,hasil;

cout <<"-----------------------------------------------------"<<endl;
cout <<"_Program Mengubah Bilangan Pecahan Ke Bilangan Bulat_"<<endl;
cout <<"-----------------------------------------------------"<<endl<<endl;

cout <<"Masukan Pembilang : ";  cin>>pembilang;
cout <<"Masukan Penyebut  : ";  cin>>penyebut;

cout <<endl<<"                       "<<pembilang<<endl;
cout <<"Bilangan Pecahannya =  -"<<endl;
cout <<"                       "<<penyebut<<endl;

hasil=pembilang/penyebut;

cout <<endl<<"Hasil Bilangan Bulatnya adalah "<<hasil<<endl;

getch();
return 0;
}

