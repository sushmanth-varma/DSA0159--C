#include<iostream>
using namespace std;
int main()
{
	int n=3,i,count=0;
	for(i=2;i<=n;i++){
		if(n%i==0){
			count=count+1;
		}
	}
	if(count==1)
	cout<<"is prime";
}
