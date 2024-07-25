#include<iostream>#include<iostream>
using namespace std;using namespace std;
int main()int main()
{{
    int arr[6], i, elem;int arr[6],i,ele;
    cout<<"Enter 5 Array Elements: ";cout<<"enter 5 array elements";
    for(i=0; i<5; i++)for(i=0;i<5;i++)
        cin>>arr[i];cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";cout<<"enetr element to insert";
    cin>>elem;cin>>ele;
    arr[i] = elem;arr[i]=ele;
    cout<<"\nThe New Array is:\n";cout<<"new array";
    for(i=0; i<6; i++)for(i=0;i<6;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
