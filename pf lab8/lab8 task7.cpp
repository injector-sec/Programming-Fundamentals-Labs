#include<iostream>
using namespace std;
bool check(int);
int main()
{
int num;
bool test=false;
cout<<"\nEnter the number : ";
cin>>num;
test=check(num);
if(test==0)
cout<<"\nThe number is not even";
else
cout<<"\nThe number is even";

}
bool check(int no1)
{
	bool tst=false;
	if(no1%2==0)
	tst=true;
	else
	tst=false;
	return tst;
}
