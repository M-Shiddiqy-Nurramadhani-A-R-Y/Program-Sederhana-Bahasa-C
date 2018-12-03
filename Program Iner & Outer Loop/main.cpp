#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai;

cout <<"---------------------------"<<endl;
cout <<"_Program Iner & Outer Loop_"<<endl;
cout <<"---------------------------"<<endl<<endl;

cout <<"Masukan Nilai Untuk Pola"<<endl;
cout <<"Masukkan nilainya : ";  cin>>nilai;
cout <<endl;

cout <<"Contoh Pola 1"<<endl;
for(int i=1; i<=nilai; i++)
    {
    for(int j=1; j<=i; j++)
        {
        cout <<"x";
        }
    cout <<endl;
    }

cout <<endl<<"Contoh Pola 2"<<endl;
for(int i=1; i<=nilai; i++)
    {
    for(int j=nilai; j>=i; j--)
        {
        cout <<"x";
        }
    cout <<endl;
    }

getch();
return 0;
}
