#include<iostream>
using namespace std;
int main()
{
	string str;
	bool ispalindrome=true;
	int l=0;
	int h=str.size()-1;
	cout<<"enter the number";
	cin>>str;
	while(h>l){
		if(str[l++]!=str[h--]){
			ispalindrome=false;
			break;
		}
	}
	if(ispalindrome)
	cout<<"is palindrome";
	else
	cout<<"not palindrome";
}
