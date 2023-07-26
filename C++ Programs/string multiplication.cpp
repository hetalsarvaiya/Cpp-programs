#include<iostream>
#include<string>
using namespace std;
class A
{
	public :
		string operator * (int n)
	{
		string result = "hello";
		for(int i=1;i<n;i++)
		{
			result = result+"hello";
		}
		return result;
	}
};
main()
{
	A obj;
	cout<<obj*3<<"\n";
}
