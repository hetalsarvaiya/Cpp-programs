// this pointer
#include<iostream>
using namespace std;
class A
{
	public :
		//p is class variable
		int p;
		//constructor
		A(int p)
		{
			this->p=p;//-> points to operator
		}
		//class method
		void display()//p is formal parameter
		{
			cout<<"value : "<<p;
		}
};
main()
{
	A obj(56);
	obj.display();
}
