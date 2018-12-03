#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai;

cout <<"-----------------------------------"<<endl;
cout <<"_Program Dengan Keyword Do & While_"<<endl;
cout <<"-----------------------------------"<<endl<<endl;

cout <<"Masukan salah satu nilai dari 0-10"<<endl;
cout <<"Masukkan nilainya : ";  cin>>nilai;
cout <<endl;

do
{
    cout << nilai <<endl;
    nilai++;
}
while(nilai<=10);

cout <<"Selesai"<<endl;

getch();
return 0;
}
