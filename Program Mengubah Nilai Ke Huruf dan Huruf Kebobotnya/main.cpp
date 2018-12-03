#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
string nama,nim;
int nilai;

cout <<"-------------------------------------------------------"<<endl;
cout <<"_Program Mengubah Nilai Ke Huruf ( A, B, C, D, Dan E )_"<<endl;
cout <<"-------------------------------------------------------"<<endl<<endl;

cout <<"Input Data Mahasiswa"<<endl;
cout <<"Masukan Nama    : "; cin>>nama;
cout <<"Masukan NIM     : "; cin>>nim;
cout <<"Masukan Nilai   : "; cin>>nilai;
cout <<"-------------------------------------------------------"<<endl;
cout <<"Nama Mahasiswa  : "<<nama<<endl;
cout <<"NIM Mahasiswa   : "<<nim<<endl;
{
if ((nilai >= 80) && (nilai <=100))
    cout <<"Nilai Mahasiswa : A";

else if ((nilai >= 65) && (nilai <= 79))
    cout <<"Nilai Mahasiswa : B";

else if ((nilai >= 50) && (nilai <= 64))
    cout <<"Nilai Mahasiswa : C";

else if ((nilai >= 35) && (nilai <= 49))
    cout <<"Nilai Mahasiswa : D";

else if ((nilai >= 0) && (nilai <= 34))
    cout <<"Nilai Mahasiswa : E";

else
    cout <<"Maaf nilai antara 0-100"<<endl;
}
cout <<endl<<endl<<endl;


char huruf;

cout <<"------------------------------------"<<endl;
cout <<"_Mengubah Nilai Ke Huruf Kebobotnya_"<<endl;
cout <<"------------------------------------"<<endl<<endl;

cout <<"MAsukan Nilai Hurufnya : ";     cin>>huruf;
cout <<endl;

switch(huruf)
{
case 'A':
case 'a':
    cout <<"A untuk nilai angka 80-100"<<endl;
break;

case 'B':
case 'b':
    cout <<"B untuk nilai angka 65-79"<<endl;
break;

case 'C':
case 'c':
    cout <<"C untuk nilai angka 50-64"<<endl;
break;

case 'D':
case 'd':
    cout <<"D untuk nilai angka 35-49"<<endl;
break;

case 'E':
case 'e':
    cout <<"E untuk nilai angka 0-34"<<endl;
break;

default :
    cout <<"Maaf Pilihan Hanya Dihuruf A, B, C, D, Dan E"<<endl;
}
getch();
return 0;
}
