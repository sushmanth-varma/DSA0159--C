#include<iostream>
using namespace std;
int main()
{
	int n,sum,temp;
	n=378;
	temp=n;
	sum=0;
	while(temp!=0){
		sum+=temp%10;
		temp/=10;
	}
	if(n%sum==0)
	cout<<"it is harsed number:";
	else
	cout<<"it is not harsed number:";
}
