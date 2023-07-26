#include<iostream>
using namespace std;
class A
{
	public:
		int fun1();
		
};
int A :: fun1()
{
	return 50;
}
int x = 10;
main()
{
	int x = 20;
	A obj1;
	cout<<obj1.fun1();
	cout<<"\n local scope : "<<x;
	cout<<"\n Global scope : "<<::x;
}
