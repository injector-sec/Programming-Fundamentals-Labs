#include<iostream>
using namespace std;
int grt(int,int);
int main()
{
int great;
int no1,no2;
	cout<<"\nEnter first number : ";
	cin>>no1;
	cout<<"\nEnter the second number : ";
	cin>>no2;
great=grt(no1,no2);
cout<<endl<<great<<" Is the greatest number";
}
int grt(int no1,int no2)
{ int grt;
	if(no1>no2)
	grt=no1;
	else
	grt=no2;
	return grt;
}

