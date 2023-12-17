#include<iostream>
int func(int);
using namespace std;
int main()
{
int range,sum;
cout<<"\nEnter the range : ";
cin>>range;
sum=func(range);
cout<<"\nThe sum of all "<<range<<" positive numbers is : "<<sum;

}
int func(int rng)
{
	int sum=0;
	for(int i=1;i<=rng;i++)
	sum=sum+i;
	return sum;
}
