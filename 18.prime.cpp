#include<iostream>
using namespace std;
int main()
{
	int n,i;
	bool isprime=true;
	cout<<"enter the number:";
	cin>>n;
	if(n==0||n==1){
		isprime=false;
	}else{
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				isprime=false;
				break;
			}
		}
	}
	if(isprime)
	cout<<n<<" "<<"is prime number";
else
cout<<n<<" "<<"is not prime";
}
