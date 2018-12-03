#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
int tahun,Hasil,H;

cout <<"-------------------------------------------------------------"<<endl;
cout <<"___Mengetahui Apakah Suatu Tahun adalah Kabisat atau Bukan___"<<endl;
cout <<"-------------------------------------------------------------"<<endl<<endl;
cout <<"Masukan Tahunnya : "; cin>>tahun;
cout <<"------------------"<<endl;

{
if (tahun%4==0)
    H=1;

else if ((tahun%100==0) && (tahun%400!=0))
    H=2;

else
    H=2;
}

switch (H)
{
case 1:
    cout <<"Jenis tahun tersebut : Tahun Kabisat"<<endl;
break;

case 2:
    cout <<"Jenis tahun tersebut : Bukan Tahun Kabisat"<<endl;
break;
}


getch();
return 0;
}
