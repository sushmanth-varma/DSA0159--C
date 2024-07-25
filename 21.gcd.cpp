#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
cout<<"enter the numbers";
cin>>a>>b;
do{
	temp=b;
	b=a%b;
	a=temp;
}while(b!=0);
cout<<"gcd is"<<a<<endl;
}

