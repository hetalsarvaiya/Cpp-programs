#include<iostream>
using namespace std;
class factorial
{
	public :
		int i,n,fact;
		
		factorial()
		{
			fact=1;
			cout<<"enter the number : ";
			cin>>n;
		}
		int print_data()
		{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<"\n factorial number is : "<<fact;
			return fact;
		}
};
main()
{
	factorial f1,f2;
	
	f1.print_data();
	f2.print_data();
}
