#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}if(sum==n)
	cout<<n<<"it is a perfect number";
	else
	cout<<n<<"not perfect number:";
}
