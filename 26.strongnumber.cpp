#include<iostream>
using namespace std;
int main()
{
	int n=2;
	int sum=0,i,temp,fact=1;
	temp=n;
	int digit;
	while(temp!=0){
		digit=temp%10;
		for(i=1;i<=digit;i++){
			fact*=i;
		}
		sum=sum+fact;
		temp/=10;
	}
	if(sum==n)
	cout<<"it is strong number";
}
