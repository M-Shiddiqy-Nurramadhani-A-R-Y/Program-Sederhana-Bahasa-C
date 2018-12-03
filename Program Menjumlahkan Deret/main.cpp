#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a=1,b,hasil,deret;

cout <<"-------------------------------------------"<<endl;
cout <<"_Program Menjumlahkan Deret: 1+3+5+7+...+n_"<<endl;
cout <<"-------------------------------------------"<<endl<<endl;

cout <<"Masukkan Jumlah Deretnya : ";    cin>>deret;
cout <<endl;

cout <<"Deretnya : "<<a<<",";
hasil=a;
for(int i=0; i<deret-1; i++)
{
    b=a+2; a=b;
    cout<<b<<",";
    hasil=hasil+b;
}
cout <<endl<<endl<<"Jumlah deretnya : "<<hasil<<endl;

getch();
return 0;
}
