#include <iostream>
using namespace std; 
string voteAge(int age)
{
  string str = "";
  if(age >= 18)
    str = "You are allowed to vote ";
  else
    str = "You are not allowed to vote ";
	return str;
}
 
int main()
{
	int age;
	cout<<"\nEnter your age:";
	cin>>age;
 
  cout << voteAge(age) << endl;
  
	return 0;
}