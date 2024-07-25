#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	cout<<"enter the numbers";
	cin>>n1>>n2;
	int intn1=static_cast<int>(n1);
	int intn2=static_cast<int>(n2);
	int modulo=intn1%intn2;
	cout<<modulo;
	
}
