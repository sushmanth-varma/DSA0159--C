#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"enter three numbers"<<endl;
cin>>n1>>n2>>n3;
int largest = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
cout<<"largest amoung three numbers"<<endl<<largest;

}
