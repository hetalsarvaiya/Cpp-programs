#include<iostream>
using namespace std;
class A
{
	public :
		void funA()
		{
			cout<<"Hello...";
		}
};
class B : virtual public A
{
	public :
		void funB()
		{
			cout<<"\nGood Morning";
		}
};
class C : virtual public A
{
	public :
		void funC()
		{
			cout<<"\nhow are you";
		}
};
class D : public B,public C
{
	public :
		void funD()
		{
			cout<<"\nHey...";
		}
};
main()
{
	D obj1;
	obj1.funA();
	obj1.funB();
	obj1.funC();
    obj1.funD();
}

