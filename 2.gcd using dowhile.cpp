#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number:";
	cin>>a>>b;
	do{
		int temp;
		temp=b;
		b=a%b;
		a=temp;
	}
	while(b!=0);
	
	
	cout<<"gcd is:"<<a<<endl;
}
