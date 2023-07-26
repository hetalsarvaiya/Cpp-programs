//abstraction
#include<iostream>
using namespace std;
class RBI
{
	public :
		//declaration of pure virtual function
		virtual void interest()= 0;
};
class SBI : public RBI
{
	public :
		//defination of pure virtual function
		void interest()
		{
			cout<<"We provide 6% interest on loan";
		}
};
class HDFC : public RBI
{
	public :
		//defination of pure virtual function
		void interest()
		{
			cout<<"\nWe provide 12% interest on loan";
		}
};
main()
{
	SBI obj;
	obj.interest();
	HDFC obj1;
	obj1.interest();
}
