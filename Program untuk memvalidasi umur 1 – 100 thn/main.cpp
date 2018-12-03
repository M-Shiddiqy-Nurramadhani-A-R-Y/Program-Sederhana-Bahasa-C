#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ()
{
string nama;
int ThL,BL,TL  ,ThS,BS,TS  ,umur,hasil;

cout <<"------------------------------------------------"<<endl;
cout <<"___Program Untuk Memvalidasi Umur 1-100 Tahun___"<<endl;
cout <<"------------------------------------------------"<<endl;
cout <<" "<<endl;

cout <<"Masukan Nama Kamu          : ";     cin>>nama;
cout <<"----------------------------"<<endl;
cout <<"Masukan Tahun Lahir Kamu   : ";     cin>>ThL;
cout <<"Masukan Bulan Lahir Kamu   : ";     cin>>BL;
cout <<"Masukan Tanggal Lahir Kamu : ";     cin>>TL;
cout <<"----------------------------"<<endl;
cout <<"Masukan Tahun Sekarang     : ";     cin>>ThS;
cout <<"Masukan Bulan Sekarang     : ";     cin>>BS;
cout <<"Masukan Tanggal Sekarang   : ";     cin>>TS;
cout <<"----------------------------"<<endl;

if (ThS > ThL)
umur = ThS-ThL;

if ((BS >= BL) && (TS >= TL))
    hasil = umur;

else if ((BS < BL) && (TS >= TL))
         hasil = umur-1;

else if ((BS = BL ) && (TS < TL))
         hasil = umur-1;


cout <<" "<<endl;
cout <<"Nama : "<<nama<<endl;
cout <<"------"<<endl;
cout <<"Umur Kamu adalah "<<hasil<<" tahun"<<endl;

getch();
return 0;
}
