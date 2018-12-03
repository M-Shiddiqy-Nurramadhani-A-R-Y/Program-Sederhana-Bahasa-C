#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int a,b,c,Keliling;

cout<<"Menghitung Keliling Segitiga"<<endl;
cout<<" "<<endl;

cout<<"Masukan Sisi A segitiga : ";
    cin>>a;
cout<<"Masukan sisi B segitiga : ";
    cin>>b;
cout<<"Masukan sisi C segitiga : ";
    cin>>c;

Keliling=a+b+c;


cout<<" "<<endl;
cout<<"Keliling segitiga adalah "<<Keliling;

    getch();
    return 0;
}
