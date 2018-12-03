#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ()
{
int b1,b2,b3 ,t;

cout <<"---------------------------------------------"<<endl;
cout <<"___Program Untuk Mencari Bilangan Terbesar___"<<endl;
cout <<"_______________Dari 3 Bilangan_______________"<<endl;
cout <<"---------------------------------------------"<<endl;
cout <<" "<<endl;

cout <<" Masukan bilangan ke 1 : ";  cin>>b1;
cout <<" Masukan bilangan ke 2 : ";  cin>>b2;
cout <<" Masukan bilangan ke 3 : ";  cin>>b3;
cout <<" "<<endl;

if (b1 > b2)
    t = b1;

else
    t = b2;

if (b3 > t)
    t = b3;

cout <<" Bilangan terbesarnya adalah "<<t<<endl;
cout <<" "<<endl;

 getch();
 return 0;
}
