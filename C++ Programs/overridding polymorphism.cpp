//polymorphism overridding method
#include<iostream>
using namespace std;
class A
{
	public :
		void add(int a)
		{
			cout<<"value : "<<a+10<<"\n";
		}
};
class B : public A
{
	public :
		void add(int a)
		{
			cout<<"value : "<<a*10<<"\n";
		}
};
main()
{
	B obj;
	obj.add(25);
	obj.A::add(56);
}
