#include<iostream>
using namespace std;
class sample
{
	public :
		int val;
	
	sample(int n)
	{
		val=n;
		cout<<"\nValue of n : "<<val;
	}
	sample(sample &obj)
	{
		obj.val;
		cout<<"\nvalue in copy const :"<<obj.val;
	}
};
main()
{
   sample obj1(56);
   sample obj2=obj1;
}
