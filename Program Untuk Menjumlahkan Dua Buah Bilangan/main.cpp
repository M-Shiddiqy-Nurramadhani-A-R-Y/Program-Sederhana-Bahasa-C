#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int angka1,angka2,hasil;

cout <<"----------------------------------------------"<<endl;
cout <<"_Program Untuk Menjumlahkan Dua Buah Bilangan_"<<endl;
cout <<"----------------------------------------------"<<endl<<endl;

cout <<"Penjumlahan"<<endl;
cout <<"Masukan angka ke 1  : ";    cin>>angka1;
cout <<"Masukan angka ke 2  : ";    cin>>angka2;
cout <<endl;
hasil=angka1+angka2;
cout <<"Hasil dari "<<angka1<<" + "<<angka2<<" = "<<hasil<<endl;
cout <<"------------------------------------------------"<<endl;

cout <<"Pengurangan"<<endl;
cout <<"Masukan angka ke 1  : ";    cin>>angka1;
cout <<"Masukan angka ke 2  : ";    cin>>angka2;
cout <<endl;
hasil=angka1-angka2;
cout <<"Hasil dari "<<angka1<<" - "<<angka2<<" = "<<hasil<<endl;
cout <<"------------------------------------------------"<<endl;

cout <<"Perkalian"<<endl;
cout <<"Masukan angka ke 1  : ";    cin>>angka1;
cout <<"Masukan angka ke 2  : ";    cin>>angka2;
cout <<endl;
hasil=angka1*angka2;
cout <<"Hasil dari "<<angka1<<" x "<<angka2<<" = "<<hasil<<endl;
cout <<"------------------------------------------------"<<endl;

cout <<"Pembagian"<<endl;
cout <<"Masukan angka ke 1  : ";    cin>>angka1;
cout <<"Masukan angka ke 2  : ";    cin>>angka2;
cout <<endl;
hasil=angka1/angka2;
cout <<"Hasil dari "<<angka1<<" : "<<angka2<<" = "<<hasil<<endl;
cout <<"------------------------------------------------"<<endl;


getch();
return 0;
}
