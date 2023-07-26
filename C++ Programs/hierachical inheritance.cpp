#include<iostream>
using namespace std;
class value
{
	protected : 
	 int val;
	 
	 public :
	 	void get_details()
	 	{
	 		cout<<"\n enter the val : ";
			cin>>val;
		}
};
class square : public value
{
	public :
		int cal_sqr()
		{
			get_details();
		    return val*val;
		}
};
class cube : public value
{
	public : 
	  int cal_cube()
	  {
	  	get_details();
	  	return val*val*val;
	  }
};
main()
{
	square obj1;
//	obj1.get_details();
	cout<<"\nsquare : "<<obj1.cal_sqr();
	
	cube c1;
//	c1.get_details();
	cout<<"\ncube : "<<c1.cal_cube();

}
