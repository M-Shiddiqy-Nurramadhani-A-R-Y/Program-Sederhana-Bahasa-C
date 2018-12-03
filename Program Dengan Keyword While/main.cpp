#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai;

cout <<"------------------------------"<<endl;
cout <<"_Program Dengan Keyword While_"<<endl;
cout <<"------------------------------"<<endl<<endl;

cout <<"Masukan salah satu nilai dari 0-10"<<endl;
cout <<"Masukan nilainya : ";   cin>>nilai;
cout <<endl;

cout <<nilai<<endl;
while(nilai<10)
{
    nilai++;
    cout <<nilai<<endl;
}
cout <<"Selesai"<<endl;


getch();
return 0;
}

