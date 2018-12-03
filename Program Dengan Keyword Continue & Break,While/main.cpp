#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai,nilai1;

cout <<"-----------------------------------------------"<<endl;
cout <<"_Program Dengan Keyword Continue & Break,While_"<<endl;
cout <<"-----------------------------------------------"<<endl<<endl;

cout <<"Masukan salah satu nilai dari 0-10"<<endl;
cout <<"1.Masukkan nilainya : ";  cin>>nilai;
cout <<"2.Masukkan nilainya : ";  cin>>nilai1;
cout <<endl;

cout <<"Contoh 1 ( MenSkip nilai 5 )"<<endl<<endl;
cout <<nilai<<endl;
while(nilai<=10)
{
    nilai++;
    if(nilai==5)
       continue;
       cout <<nilai<<endl;
}
cout <<"Selesai"<<endl;

cout <<endl<<"Contoh 2 ( MenStop nilai 5 )"<<endl<<endl;
cout <<nilai1<<endl;
while(nilai1<=10)
{
    nilai1++;
    if(nilai1==5)
       break;
       cout <<nilai1<<endl;
}
cout <<"Selesai"<<endl;
getch();
return 0;
}
