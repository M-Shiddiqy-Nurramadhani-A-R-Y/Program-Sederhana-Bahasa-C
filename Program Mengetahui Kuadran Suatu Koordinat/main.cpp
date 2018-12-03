#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int X,Y;

cout <<"--------------------------------------------"<<endl;
cout <<"_Program Mengetahui Kuadran Suatu Koordinat_"<<endl;
cout <<"--------------------------------------------"<<endl<<endl;

cout <<"Masukkan Koordinat X : "; cin>>X;
cout <<"Masukkan Koordinat Y : "; cin>>Y;
cout <<endl;

cout <<"Koordinat X = "<<X<<endl;
cout <<"Koordinat Y = "<<Y<<endl;
cout <<endl;
cout <<"Berada di ";
{
 if(X>0 && Y>0)
         cout <<"KUADRAN I";
else if(X>0 && Y<0)
         cout <<"KUADRAN II";
else if(X<0 && Y<0)
         cout <<"KUADRAN III";
else if(X<0 && Y>0)
         cout <<"KUADRAN IV";
else if(X==0 && Y==0)
         cout <<"TITIK PUSAT";
}
cout <<endl;

getch();
return 0;
}
