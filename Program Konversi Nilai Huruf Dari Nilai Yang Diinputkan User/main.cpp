#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
string nama,nim;
int nilai,hasil;

cout <<"-----------------------------------"<<endl;
cout <<"---Program Konversi Nilai Huruf----"<<endl;
cout <<"--Dari Nilai Yang Diinputkan User--"<<endl;
cout <<"-----------------------------------"<<endl<<endl;

cout <<"Input Data Mahasiswa"<<endl;
cout <<"Masukan Nama    : "; cin>>nama;
cout <<"Masukan NIM     : "; cin>>nim;
cout <<"Masukan Nilai   : "; cin>>nilai;
cout <<"-----------------------------------"<<endl;
cout <<"Nama Mahasiswa  : "<<nama<<endl;
cout <<"NIM Mahasiswa   : "<<nim<<endl;


if ((nilai >= 80) && (nilai <=100))
    hasil=1;

else if ((nilai >= 65) && (nilai <= 79))
    hasil=2;

else if ((nilai >= 50) && (nilai <= 64))
    hasil=3;

else if ((nilai >= 35) && (nilai <= 49))
    hasil=4;

else if ((nilai >= 0) && (nilai <= 34))
    hasil=5;

else
    cout <<"Maaf nilai antara 0-100"<<endl;


switch (hasil)
{
case 1:
    cout <<"Nilai Mahasiswa : A";
break;

case 2:
    cout <<"Nilai Mahasiswa : B";
break;

case 3:
    cout <<"Nilai Mahasiswa : C";
break;

case 4:
    cout <<"Nilai Mahasiswa : D";
break;

case 5:
    cout <<"Nilai Mahasiswa : E";
break;
}

getch ();
return 0;
}
