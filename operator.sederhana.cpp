#include<iostream>
using namespace std;
int main()
{
	int angka1,angka2;
	char operasi;
	
	cout<<" angka 1=";
	cin>>angka1;
	cout<<" angka 2=";
	cin>>angka2;
	

	cout<<"operator (+),(-),(*),(/) =";
	cin>>operasi;
	
	
	cout<<" hasil =";
	if(operasi == '+') cout<<angka1+angka2<<endl;
	else if(operasi =='-')cout<<angka1-angka2<<endl;
	else if(operasi =='*')cout<<angka1*angka2<<endl;
	else if(operasi =='/')cout<<angka1/angka2<<endl;
}
