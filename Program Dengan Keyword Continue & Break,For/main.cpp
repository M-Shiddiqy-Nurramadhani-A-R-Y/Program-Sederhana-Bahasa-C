#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai,nilai1;

cout <<"---------------------------------------------"<<endl;
cout <<"_Program Dengan Keyword Continue & Break,For_"<<endl;
cout <<"---------------------------------------------"<<endl<<endl;

cout <<"Masukan salah satu nilai dari 0-10"<<endl;
cout <<"1.Masukkan nilainya : ";  cin>>nilai;
cout <<"2.Masukkan nilainya : ";  cin>>nilai1;
cout <<endl;

cout <<"Contoh 1 ( MenSkip nilai 5 )"<<endl;
for(int i=nilai; i<=10; i++)
{
    if(i==5)
       continue;
       cout <<i<<endl;
}
cout <<"Selesai"<<endl;

cout <<endl<<"Contoh 2 ( MenStop nilai 5 )"<<endl;
for(int j=nilai1; j<=10; j++)
{
    if(j==5)
       break;
       cout <<j<<endl;
}
cout <<"Selesai"<<endl;

getch();
return 0;
}
