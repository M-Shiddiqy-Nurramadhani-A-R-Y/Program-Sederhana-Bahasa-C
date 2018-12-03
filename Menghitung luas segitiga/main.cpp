#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{

int a,t;
cout<<"Menghitung Luas Segitiga"<<endl;
cout<<" "<<endl;

float pembagi=0.5,luas;

cout<<"Masukan alas segitiga   : ";
    cin>>a;
cout<<"Masukan tinggi segitiga : ";
    cin>>t;

luas=pembagi*a*t;
cout<<" "<<endl;
cout<<"Luas segitiga adalah "<<luas;

    getch();
    return 0;
}
