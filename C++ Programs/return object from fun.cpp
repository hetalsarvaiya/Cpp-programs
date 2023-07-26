//returning object from a function

#include<iostream>
using namespace std;
class A
{
	public :
		int a=32,b=90;
};

A myfun()
{
	A obj;
	obj.a=20;
	obj.b=30;
	
	return obj;
}
int main()
{
    A obj1;
    cout<<obj1.a<<"\n"<<obj1.b;
    obj1=myfun();
    cout<<"\n\n"<<obj1.a<<"\n"<<obj1.b;
}
