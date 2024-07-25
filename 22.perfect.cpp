#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	int i;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}if(sum==n)
	cout<<"it is a perfect number:";
	else
	cout<<"not perfect";
}
