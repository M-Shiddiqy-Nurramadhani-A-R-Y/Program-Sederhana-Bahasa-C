#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ()
{
int suhu,zat;

cout <<"------------------------------------------------------------"<<endl;
cout <<"___Program Untuk Mengetahui Suatu Zat Beku, Cair atau Gas___"<<endl;
cout <<"------------------------------------------------------------"<<endl;
cout <<" "<<endl;

cout <<" Masukan Suhu Zat : ";   cin>>suhu;
cout <<" "<<endl;
cout <<" Berdasarkan suhu : ";



if (suhu <= 0)
    cout <<"Wujud Zat Tersebut Adalah Beku"<<endl;

else if (suhu<100)
    cout <<"Wujud Zat Tersebut Adalah Cair"<<endl;

else
    cout <<"Wujud Zat Tersebut Adalah Gas"<<endl;


    getch();
    return 0;
}
