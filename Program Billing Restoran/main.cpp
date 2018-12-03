#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
Awal:
system("cls");

int makanan,minuman,jumlah,harga;
int bayar,bayar1,kembalian,kekurangan,total;
int pilihanmakanan,pilihanminuman;
int semuamakanan=0,semuaminuman=0;
char yt,jenisminuman;

cout <<">>>>>***************** DAFTAR MENU RESTORAN BOCAH SOSMED *****************<<<<<"<<endl<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl;
cout <<"||>>- MAKANAN :                  ||>>- MINUMAN :                             ||"<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl;
cout <<"|| 1. Nasi Goreng.    Rp.10000,- || 1. Jus Apel/Alpukat/Pir/dll.   Rp.7000,- ||"<<endl;
cout <<"|| 2. Kwetiaw.        Rp. 8000,- || 2. Es Teh / Teh Hangat.        Rp.5000,- ||"<<endl;
cout <<"|| 3. Bakso.          Rp. 7000,- || 3. Es Kelapa.                  Rp.4000,- ||"<<endl;
cout <<"|| 4. Mie Ayam.       Rp. 7000,- || 4. Aqu-ah Botol.               Rp.3000,- ||"<<endl;
cout <<"|| 5. Mie Ayam Bakso. Rp.12000,- || 5. Aqu-ah Gelas.               Rp.500,-  ||"<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl<<endl;

{ // Program Makanannya.
cout <<"Mau pesan makanan (Y/T) ?  "; cin>>yt;
cout <<"-------------------------------------"<<endl;
if(yt=='Y'||yt=='y') {goto YA;}      if(yt=='T'||yt=='t') {goto TIDAK;}

YA:
cout <<"Banyak jenis makanan yang di pesan : ";  cin>>makanan;  cout<<endl;
for(int i=1; i<=makanan; i++)
{
    cout <<"Jenis makanan ke- "<<i<<" : ";  cin>>pilihanmakanan;

switch(pilihanmakanan)
{
case 1:
    harga=10000;  break;

case 2:
    harga=8000;   break;

case 3:
    harga=7000; break;

case 4:
    harga=7000;   break;

case 5:
    harga=12000;  break;
}
    cout <<"Jumlah pemesanan    : ";        cin>>jumlah;
    cout <<"*************************************"<<endl;
total=jumlah*harga;
semuamakanan=semuamakanan+total;
}
    cout <<endl<<"Total harga makanan = "<<semuamakanan<<endl;
    cout <<"*************************************"<<endl<<endl;
}
TIDAK:
{ // program Minumannya.
cout <<"Mau pesan minuman (Y/T) ?  "; cin>>yt;
cout <<"-------------------------------------"<<endl;
if(yt=='Y'||yt=='y') {goto YA1;}      if(yt=='T'||yt=='t') {goto TIDAK1;}

YA1:
cout <<"Banyak jenis minuman yang di pesan : ";  cin>>minuman;  cout<<endl;
for(int i=1; i<=minuman; i++)
{
    cout <<"Jenis minuman ke- "<<i<<" : ";  cin>>pilihanminuman;

switch(pilihanminuman)
{
case 1:
    harga=7000;  break;

case 2:
    harga=5000;  break;

case 3:
    harga=4000;  break;

case 4:
    harga=3000;  break;

case 5:
    harga=500;   break;
}
    cout <<"Jumlah pemesanan    : ";        cin>>jumlah;
    cout <<"*************************************"<<endl;
total=jumlah*harga;
semuaminuman=semuaminuman+total;
}
    cout <<endl<<"Total harga minuman = "<<semuaminuman<<endl;
    cout <<"*************************************"<<endl<<endl;
}
TIDAK1:
{ // Program Total Semuanya
total=semuamakanan+semuaminuman;
cout <<endl<<"Total Semuanya adalah "<<total<<endl<<endl;
cout <<"Dibayar dengan jumlah uang : ";     cin>>bayar;

if (bayar==total)
{
cout <<endl<<"Uangnya Pas"<<endl;
cout <<"*************************************"<<endl<<endl;
}
else if(bayar>total)
{
kembalian=bayar-total;
cout <<"Uang kembalianya           : "<<kembalian<<endl;
cout <<"*************************************"<<endl<<endl;
}
else if(bayar<<total)
{
kekurangan=bayar-total;
cout <<"Uang kekurangannya           : "<<kekurangan<<endl;
cout <<"*************************************"<<endl<<endl;

cout <<"Dibayar lagi dengan jumlah uang : ";     cin>>bayar1;
kembalian=(bayar1+bayar)-total;
cout <<"Uang kembalianya                : "<<kembalian<<endl;
cout <<"*************************************"<<endl<<endl;
}
}

{ // Akhir Program.
cout <<"Ada lagi yang bisa di bantu lagi (Y/T) ? ";   cin>>yt;
cout <<"-------------------------------------"<<endl;
if(yt=='Y'||yt=='y') {goto Awal;}      if(yt=='T'||yt=='t') {goto TIDAK_AKHIR;}

TIDAK_AKHIR:
cout <<endl<<"-------------------------------------"<<endl;
cout <<">>> Terimakasih Telah Mengunjungi <<<"<<endl;
cout <<">>>>>>> RESTORAN BOCAH SOSMED <<<<<<<"<<endl;
cout <<"-------------------------------------"<<endl<<endl;
}

getch();
return 0;
}
