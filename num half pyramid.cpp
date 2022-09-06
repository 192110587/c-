//Number half pyramid
//K.Ashwini Reg n.o- 192110587
#include<iostream>
using namespace std;
int main()
{
	int rows,i,j;
	cout<<"enter the n.o of rows:";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}