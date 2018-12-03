#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int pembilang,penyebut,pembilang2,total;

cout <<"-------------------------------------------"<<endl;
cout <<"_Program Menyederhanakan b/c Menjadi A b/c_"<<endl;
cout <<"-------------------------------------------"<<endl<<endl;

cout <<"Masukan Pembilang : ";  cin>>pembilang;
cout <<"Masukan Penyebut  : ";  cin>>penyebut;
cout <<endl;

total=pembilang/penyebut;
pembilang2=pembilang%penyebut;
{
if(pembilang%penyebut==0)
    cout <<"Bilangan  ( "<<pembilang<<"/"<<penyebut<<" )"<<endl<<"Di sedehrhanakan menjadi  ( "<<total<<" )"<<endl;

else if(pembilang%penyebut!=0)
    cout <<"Bilangan  ( "<<pembilang<<"/"<<penyebut<<" )"<<endl<<"Di sedehrhanakan menjadi  ( "<<total<<" "<<pembilang2<<"/"<<penyebut<<" )"<<endl;
}
getch();
return 0;
}
