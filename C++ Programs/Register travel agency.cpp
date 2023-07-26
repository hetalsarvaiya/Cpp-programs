#include<iostream>
#include<string.h>
using namespace std;
class traveling
{
	public :
		char ch;
		char User_name[20],Password[20],Conf_Password[20],d_u_name[20],d_pswd[20];
		int  a,b,c;
		void Reg_data()
		{
			cout<<"\n.......Welcome to travel agency.......\n";
			cout<<"\n10 Most Popular Destination";
			cout<<"\n1.Somnath";
			cout<<"\n2.Dwarka";
			cout<<"\n3.Haridwar";
			cout<<"\n4.Porbandar";
			cout<<"\n5.Ambaji";
			cout<<"\n6.Chotila";
			cout<<"\n7.Rajkot";
			cout<<"\n8.Ahemdabad";
			cout<<"\n9.Vadodara";
			cout<<"\n10.Surat";
			
			fflush(stdin);
			cout<<"\nDo you want to Register ?: (y/n) : ";
			cin>>ch;
			
			if(ch=='y' || ch=='Y')
			{
				cout<<"\nFollow below";
			}
			else
			{
				cout<<"....Thank you....";
			}
		}
		void Reg_process()
		{
			cout<<"\n\n........Registration........\n";
			cout<<"\nEnter the Username/email_id : ";
			cin>>User_name;
			cout<<"Enter the Password : ";
			cin>>Password;
			cout<<"Enter the confirm password : ";
			cin>>Conf_Password;
			
			a=strcmp(Password,Conf_Password);
			if(a==0)
			{
				cout<<"Registraion Succesfully";
			}
			else
			{
				cout<<"Password and Confirm_password does not match";
			}
		}
		
		void login_process()
		{
			fflush(stdin);
			cout<<"\n\n.....Login Section......\n";
			cout<<"\nEnter the Username/email_id : ";
			cin>>d_u_name;
			cout<<"Enter the Password : ";
			cin>>d_pswd;
			
			b=strcmp(d_u_name,User_name);
			c=strcmp(d_pswd,Password);
			
			if(b==0 && c==0)
			{
				cout<<"Login Successfully";
			}
			else
			{
				cout<<"Access Denied!!!!";
			}
		}
};
main()
{
	traveling t1;
	t1.Reg_data();
	t1.Reg_process();
	t1.login_process();
}
