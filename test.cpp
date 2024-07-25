#include<iostream>
using namespace std;
int  main()
{
	int n,sum,digit,originalnum;
	int temp;
	n=19;
	originalnum=n;
	do{
		sum=0;
		while(n!=0){
			digit=n%10;
			sum+=digit*digit;
			n/=10;
		}
			n=sum;
	}while(sum!=1&&sum!=4);
	if(sum==1)
	cout<<"it is happy number:";
	else
	cout<<"not happy number:";
}
