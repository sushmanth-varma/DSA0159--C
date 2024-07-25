#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int fact=1;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"factorial of "<< n <<" is "<< fact <<endl;
}
