#include<iostream>
using namespace std;
int main()
{
int a,b,sum,sub,mul;
float div,mod;
cout<<"enter the a and b:";
cin>>a;
cin>>b;
sum=a+b;
sub=a-b;
mul=a*b;
div=a/(float)b;
mod=a%b;
cout<<"addition:\n"<<sum;
cout<<"\nsubtraction:"<<sub;
cout<<"\nmultiplication:"<<mul;
cout<<"\ndivision:"<<div;
cout<<"\nmodule:"<<mod;
return 0;
}

