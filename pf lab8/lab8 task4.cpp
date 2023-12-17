#include<iostream>
using namespace std;
string check(int);
int main()
{
int num;
string res;
cout<<"\nENter any number : ";
cin>>num;
res=check(num);
cout<<"\nThe number is "<<res;
}
string check(int u)
{
	string val;
	if(u%2==0)
	val="Even";
	else
	val="Odd";
	return val;
}
