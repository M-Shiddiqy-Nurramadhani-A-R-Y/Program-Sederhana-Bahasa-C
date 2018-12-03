#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
int hargab,jmlhb,totalh,bonus;
string namab;

{
cout <<"----------------------------------------"<<endl;
cout <<"___Program Penjualan Barang dan Bonus___"<<endl;
cout <<"----------------------------------------"<<endl<<endl;

cout <<"Masukan nama barang  : ";    cin>>namab;
cout <<"Masukan harga barang : ";    cin>>hargab;
cout <<"Masukan jumlah beli  : ";    cin>>jmlhb;
cout <<"----------------------------------------"<<endl;

totalh=jmlhb*hargab;

cout <<"Nama Barang          : "<<namab<<endl;
cout <<"Harga Barang         : "<<hargab<<endl;
cout <<"Jumlah Barang        : "<<jmlhb<<endl;
cout <<"----------------------------------------"<<endl;
cout <<"Total Harga Barang   : "<<totalh<<endl;
cout <<"----------------------------------------"<<endl;
}

if ((totalh>=500000) && (jmlhb>5))
    bonus=1;

else if ((totalh>=100000) && (jmlhb>3))
    bonus=2;

else if ((totalh>=50000) && (jmlhb>2))
    bonus=3;

switch (bonus)
{
case 1:
    cout <<"Selamat anda mendapatkan bonus 1 buah Setrika";
break;

case 2:
    cout <<"Selamat anda mendapatkan bonus 1 buah Payung";
break;

case 3:
    cout <<"Selamat anda mendapatkan bonus 1 buah Ballpoint";
break;
}


getch();
return 0;
}
