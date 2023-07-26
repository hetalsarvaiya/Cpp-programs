//Friend function : give access on private data member of class

#include<iostream>
using namespace std;
class A
{
	int a=23;
	
	//declaration of friend function
	friend void display(A &obj);
};
//defination of friend function
void display(A &obj)
{
//	obj.a=10;
	cout<<obj.a;
}
main()
{
	A obj1;
	display(obj1);
}
