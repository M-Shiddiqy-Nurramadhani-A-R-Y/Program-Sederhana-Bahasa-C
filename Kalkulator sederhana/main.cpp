#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int angka1,angka2,pilihan;

float hasil;
cout<<"KALKULATOR"<<endl;
cout<<endl;

cout<<"Pilihlah menu yang anda butuhkan"<<endl;
    cout<<"[1] Penjumlahan"<<endl;
    cout<<"[2] Pengurangan"<<endl;
    cout<<"[3] Perkalian"<<endl;
    cout<<"[4] Pembagian"<<endl;
cout<<"Masukan pilihan anda : ";
    cin>>pilihan;
    cout<<endl;

switch (pilihan)
{
case 1:
    cout<<"Input angka ke 1 = ";
     cin>>angka1;
    cout<<"Input angka ke 2 = ";
     cin>>angka2;
hasil=angka1+angka2;
cout<<"Hasilnya adalah "<<hasil<<endl;
break;

case 2:
    cout<<"Input angka ke 1 = ";
     cin>>angka1;
    cout<<"Input angka ke 2 = ";
     cin>>angka2;
hasil=angka1-angka2;
cout<<"Hasilnya adalah "<<hasil<<endl;
break;

case 3:
    cout<<"Input angka ke 1 = ";
     cin>>angka1;
    cout<<"Input angka ke 2 = ";
     cin>>angka2;
hasil=angka1*angka2;
cout<<"Hasilnya adalah "<<hasil<<endl;
break;

case 4:
    cout<<"Input angka ke 1 = ";
     cin>>angka1;
    cout<<"Input angka ke 2 = ";
     cin>>angka2;
hasil=angka1/angka2;
cout<<"Hasilnya adalah "<<hasil<<endl;
break;

default :
    cout<<"Maaf Pilihan Anda Tidak Ditemukan?";

getch();
return 0;
}
}
