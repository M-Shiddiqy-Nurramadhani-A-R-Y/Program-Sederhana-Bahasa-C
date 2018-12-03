#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int nilai;

cout <<"----------------------------"<<endl;
cout <<"_Program Dengan Keyword For_"<<endl;
cout <<"----------------------------"<<endl<<endl;

cout <<"Masukan salah satu nilai dari 0-10"<<endl;
cout <<"Masukkan nilainya : ";  cin>>nilai;
cout <<endl;

{
cout <<"Contoh 1 ( Nilai + 1 = hasil + 1 dan seterusnya )"<<endl<<endl;
    for(int i=nilai; i<=10; i++)
        cout << i <<endl;
        cout <<"Selesai"<<endl;

cout <<endl<<"Contoh 2 ( Nilai - 1 = hasil - 1 dan seterusnya )"<<endl<<endl;
    for(int i=nilai; i>=-10; i--)
        cout << i <<endl;
        cout <<"Selesai"<<endl;

cout <<endl<<"Contoh 3 ( Nilai + 2 = hasil + 2 dan seterusnya )"<<endl<<endl;
    for(int i=nilai; i<=10; i+=2)
        cout << i <<endl;
        cout <<"Selesai"<<endl;
}


getch();
return 0;
}
