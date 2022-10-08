#include<iostream>
#include<conio.h>

using namespace std;

class characters
{
	char roles[10];
	int ch;
	float rate;
	public:
		characters()
		{
			cout<<"enter the your fav charaters by choosing choice 1 for prabhas,2 for anushka,3 for ram";
			cin>>ch;
		}

		role()
		{
			if(ch==1)
			{
				cout<<"hero";
			}
			else if(ch==2)
			{
			  cout<<"heroin and vilan";
			}
			  	else if(ch==3)
			  	{
				  cout<<"comedian";
			    }
	    }
	
	ratings()
	{
	if(ch==1)
	{
		rate=4.2;
	}
	
	else if(ch==2)
	{
		rate=4.8;
	}
	else if(ch==3)
	{
		 rate=3.5;
	}
   }

display()
{
	if(rate<=4.5)
	{
	cout<<"top actor of the year:";
	cout<<"rating is 4.5";
    }
else if (rate<4.0)
{
	cout<<"second most famous actor";
	cout<<" rating is 4.0";
}
	else if (rate<3.5)
{
	cout<<" third position for best actor goes to ram";
	          cout<<" rating is 3.5";
}
}
};


int main()
{
	characters s;
	s.role();
	s.ratings();
	s.display();
	return 0;
}
