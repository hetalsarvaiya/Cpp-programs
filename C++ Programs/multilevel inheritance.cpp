#include<iostream>
using namespace std;
class student
{
	public :
		int roll_no,maths,science;
		
		void get_detail()
		{
			cout<<"\n enter the rollno : ";
			cin>>roll_no;
			
			cout<<"\n enter the maths marks : ";
			cin>>maths;
			
			cout<<"\n enter the science marks : ";
			cin>>science;
		}
};
class sports : public student
{
	public :
		int spmark;
		
		void get_spmark()
		{
			cout<<"\n enter the sports marks : ";
			cin>>spmark;
		}
};
class statement : public sports
{
	public : 
	    int total;
	    
	    void calculate_data()
	    {
	    	total = maths + science + spmark;
		}
	    void print_data()
	    {
	    	cout<<"\n enter rollno : "<<roll_no;
	    	cout<<"\n total marks : "<<total;
		}
	    
};
main()
{
	statement s1;
	s1.get_detail();
	s1.get_spmark();
	s1.calculate_data();
	s1.print_data();
}
