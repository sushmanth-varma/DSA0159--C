#include<iostream>
#include<cmath>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;
int getprecedence(char op){
	switch (op){
		case'+':
			case'-':
				return 1;
				case'*':
					case'/':
						return 2;
						case'^':
							return 3;
							default:
								return 0;
	}
}
int main()
{
	int n1,n2,sum,sub,mul,div,pow;
	cout<<"enter the operator:"<<op;
	cout<<sum=n1+n2<<endl;
	cout<<sub=n1-n2<<endl;
	cout<<mul=n1*n2<<endl;
	cout<<div=n1/n2<<endl;
	cout<<pow=n1^n2<<endl;
	
}
