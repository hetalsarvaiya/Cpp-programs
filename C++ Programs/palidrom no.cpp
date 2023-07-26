#include<iostream>
using namespace std;
main()
{
	int n,r=0,c=0,s=0;
	
	cout<<"enter no : ";
	cin>>n;
	
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		cout<<"palidrome";
	}
	else
	{
		cout<<"not palidrome";
	}
}
