#include<iostream>
using namespace std;
int main()
{
	int i,j,n=10;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			cout<<i*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
