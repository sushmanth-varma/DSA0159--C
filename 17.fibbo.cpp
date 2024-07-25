#include<iostream>
using namespace std;
int  main()
{
	int n,i,t1=0,t2=1,t3;
	int sum=0;
	cout<<"enter the number";
	cin>>n;
	cout<<"fibonacci series:"<<t1<<","<<t2<<",";
	for(i=1;i<=n-2;i++){
		t3=t1+t2;
		t1=t2;
		t2=t3;
		cout<<t3<<"  ";
		
	}
	return 0;
}
