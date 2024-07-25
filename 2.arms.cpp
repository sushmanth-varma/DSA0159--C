#include<iostream>
using namespace std;
int main()
{
	int n,original_num,remainder,result=0;
	cout<<"enter the number";
	cin>>n;
	original_num=n;
	while(original_num!=0){
		remainder=original_num%10;
		result=result+remainder*remainder*remainder;
		original_num/=10;
	}
	if(result==n)
	cout<<"it is a armstrong number";
	else
	cout<<"not armstrong";
}
