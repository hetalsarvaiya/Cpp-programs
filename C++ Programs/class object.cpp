#include<iostream>
using namespace std;
class student
{
	public:
		
	int rollno;
	float per;
	
	void get_value()
	{
		cout<<"\nenter roll no";
		cin>>rollno;
		
		cout<<"\nenter percentage";
		cin>>per;
	}
	void print_value()
	{
		cout<<"\nrollno : "<<rollno;
		cout<<"\npercentage :"<<per;
	}
};
main()
{
	student s1,s2;
	
	s1.get_value();
	s1.print_value();
	
	s2.get_value();
	s2.print_value();
}
