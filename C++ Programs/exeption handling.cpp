//Exception handling
/*
use to handle runtime error
try
{
}
catch()
{
}
*/

#include<iostream>
using namespace std;

float div(int a,int b)
{
	if(b==0)
	{
		cout<<"can not devided by zero!!";
	}
	else
	{
		return a/b;
	}
}
int main()
{
	float n1,n2;
	cout<<"enter two number : ";
	cin>>n1>>n2;
	
	try
	{
		cout<<"\ndiv :"<<div(n1,n2);
	}
	catch(const char*e)
	{
		cout<<"error : "<<e;
	}
}

