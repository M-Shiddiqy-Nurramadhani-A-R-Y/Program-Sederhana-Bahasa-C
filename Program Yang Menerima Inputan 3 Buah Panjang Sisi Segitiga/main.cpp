#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ()
{
int A,B,C,H,H1;

cout <<"---------------------------------------"<<endl;
cout <<"_____program Yang Menerima Inputan_____"<<endl;
cout <<"_____3  Buah Panjang Sisi Segitiga_____"<<endl;
cout <<"_______Dan Mencari Tahu Jenisnya_______"<<endl;
cout <<"---------------------------------------"<<endl;

cout <<" "<<endl;

cout <<"Masukan sisi A : ";  cin>>A;
cout <<"Masukan sisi B : ";  cin>>B;
cout <<"Masukan sisi C : ";  cin>>C;
cout <<"---------------------------------------"<<endl;
H1=A+B+C;
cout<<"Keliling segitiga adalah "<<H1<<endl;
cout <<"Dan Jenisnya adalah ";

{
if ( A==B && B==C )
    H = 1;

else if (A==B && B!=C || B==C && C!=A || C==A && A!=B)
   H = 2;

else
    H = 3;
}


switch (H)
{
case 1:
    cout <<"Segitiga Sama Sisi"<<endl;
break;

case 2:
    cout <<"Segitiga Sama Kaki"<<endl;
break;

case 3:
    cout <<"Segitiga Sembarang"<<endl;
break;
}
cout <<"---------------------------------------"<<endl;

return 0;
getch();
}



