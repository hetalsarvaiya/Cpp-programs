#include<iostream>
using namespace std;
main()
{	
	char name[10];
	int i;
	
	cout<<"enter the character : ";
	cin>>name;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		{
			cout<<"character is vovels";
		}
		else
		{
			cout<<"character is consnant";
		}
	}	
}
