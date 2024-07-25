#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void drive(){
			cout<<"vehicle"<<endl;
		}
};
class car:public vehicle{
	public:
		void drive()override{
		cout<<"car is driving"<<endl;
		}
};
class truck:public vehicle{
	public:
	 void drive()override{
		cout<<"truck drive"<<endl;
		}
};
int main()
{
	vehicle* v1=new car();
	vehicle* v2=new truck();
	v1->drive();
	v2->drive();
	delete v1;
	delete v2;
}
