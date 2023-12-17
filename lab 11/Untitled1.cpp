#include<iostream>
using namespace std;
struct student{
	string name,dept,email,phone;
	int id;
};
int main()
{
student p[5];
for(int i=0;i<5;i++)
{
	cout<<"\nEnter ID of student "<<i+1<<" : ";
	cin>>p[i].id;
	cout<<"\nEnter Name of student "<<i+1<<" : ";
	cin>>p[i].name;
	cout<<"\nEnter Dept of student "<<i+1<<" : ";
	cin>>p[i].dept;
	cout<<"\nEnter Name of student "<<i+1<<" : ";
	cin>>p[i].email;
	cout<<"\nEnter Name of student "<<i+1<<" : ";
	cin>>p[i].phone;
}

}

