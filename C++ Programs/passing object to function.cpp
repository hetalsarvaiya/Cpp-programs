//passing object to a function
#include<iostream>
using namespace std;
class A
{
	public :
		int a=32;
		
};
void myfunc(A obj)
{
	cout<<obj.a;
}

main()
{
	A o1;
	myfunc(o1);
}
