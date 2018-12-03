#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

int sudut1,sudut2,sudutv,pilihan;
float utama=180,hasil,hasil1;

cout<<"Menghitung Sudut Segitiga"<<endl;
cout<<" "<<endl;

cout<<"Pilihlah menu yang anda butuhkan"<<endl;
    cout<<"[1] Menggunakan Ukuran Dua Sudut Lainnya"<<endl;
    cout<<"[2] Menggunakan Variabel"<<endl;
cout<<"Masukan pilihan anda : ";
    cin>>pilihan;
cout<<endl;

switch (pilihan)
{
case 1:
    cout<<"Masukan sudut ke 1 : ";
     cin>>sudut1;
    cout<<"Masukan sudut ke 2 : ";
     cin>>sudut2;

hasil=(utama-(sudut1+sudut2));
cout<<" "<<endl;
cout<<"Sudut segitiga adalah "<<hasil<<endl;
break;

case 2:
    cout<<"Masukan 1 sudut : ";
     cin>>sudutv;

hasil=((utama-sudutv)/3);
hasil1=(hasil*2);
cout<<" "<<endl;
cout<<"Sudut segitiga ke 1 adalah "<<hasil<<endl;
cout<<"Sudut segitiga ke 2 adalah "<<hasil1<<endl;
break;

default :
    cout<<"Maaf Pilihan Anda Tidak Ditemukan?";

    getch();
    return 0;
}
}
