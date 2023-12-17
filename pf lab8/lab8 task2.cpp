#include<iostream>
using namespace std;
int square(int);
int main()
{
int num,sqr;
cout<<"\nENter the number to get square : ";
cin>>num;
sqr=square(num);
cout<<"\nSquare : "<<sqr;
}

int square(int no)
{
	int sq;
	sq=no*no;
	return sq;
}

