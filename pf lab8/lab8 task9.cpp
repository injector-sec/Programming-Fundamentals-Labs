#include<iostream>
void printTable(int);
void printTable(int,int);
 
using namespace std;
int main()
{
int num,num1,range;
cout<<"\nEnter the number to print its table : ";
cin>>num;
printTable(num);

cout<<"\nEnter the number to print its table : ";
cin>>num1;
cout<<"\nEnter the range to print : ";
cin>>range;
printTable(num1,range);
}
void printTable(int no)
{
	for(int i=1;i<=10;i++)
	cout<<i<<" x "<<no<<" = "<<i*no<<endl;
}
void printTable(int num,int range)
{
	for(int i=1;i<=range;i++)
	cout<<i<<" x "<<num<<" = "<<i*num<<endl;
}
