#include<iostream>
using namespace std;
int main()
{
    int pilih;
    string menu1,menu2,menu3,menu4,menu5;
    int pesanan1,pesanan2,pesanan3,pesanan4,pesanan5;
    
    cout<<"==========================================="<<endl;
    cout<<"||             MENU MINUMAN              ||"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"||   MENU MINUMAN  |    HARGA MINUMAN    ||"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"|| 1.jus alvukat   | RP.15.000           ||"<<endl;
    cout<<"|| 2.jus jeruk     | RP.7.000            ||"<<endl;
    cout<<"|| 3.jus anggur    | RP.17.000           ||"<<endl;
    cout<<"|| 4.jus strawberry| RP.17.000           ||"<<endl;
    cout<<"|| 5.jus mangga    | RP.10.000           ||"<<endl;
    cout<<"==========================================="<<endl;
    
    menu1=" jus alvukat";
    pesanan1=15.000;
    menu2=" jus jeruk";
    pesanan2=7.000;
    menu3=" jus anggur";
    pesanan3=17.000;
    menu4=" jus strawberry";
    pesanan4=17.000;
    menu5=" jus mangga";
    pesanan5=10.000;
    
    char ulangi='y';
    int banyak=0;
    
    do
	{
    cout<<" pilih menu minuman anda :";
    cin>>pilih;
    if( pilih==1)
    {
    	cout<<"pesanan :"<<menu1<<" | harga : RP.15.000"<<pesanan1<<endl;
	}
	else if( pilih==2)
	{
		cout<<"pesanan :"<<menu2<<" | harga : RP.7.000"<<pesanan2<<endl;
	}
	else if( pilih==3)
	{
		cout<<"pesanan :"<<menu3<<" | harga : RP.17.000"<<pesanan3<<endl;
	}
	else if( pilih==4)
	{
		cout<<"pesanan :"<<menu4<<" | harga : RP.17.000"<<endl;
	}
	else if( pilih==5)
	{
		cout<<"pesanan :"<<menu5<<" | harga : RP.10.000"<<endl;
	}
	else
	{
		cout<<"-----------------------------------"<<endl;
		cout<<" Maaf, menu pesanan tidak tesedia! "<<endl;
		cout<<"-----------------------------------"<<endl;
	}
	cout<<" apakah ingin memesan lagi ?";
	cout<<" (y/t) :";
	cin>>ulangi;
    }
    while( ulangi=='y');
    cout<<"------------------------------------------------"<<endl;
    cout<<"||  jumlah pesanan :"<<banyak<<"(cek pesanan) ||"<<endl;
    cout<<"------------------------------------------------"<<endl;
    
    int a,b,c,tambah;
    char operasi;
    cout<<" menu a =";cin>>a;
    cout<<" menu b =";cin>>b;
    cout<<" menu c =";cin>>c;
    cout<<" (+) =";
    cin>>operasi;
    cout<<" total= ";
    if(  operasi =='+')cout<<a+b+c<<endl;
}
