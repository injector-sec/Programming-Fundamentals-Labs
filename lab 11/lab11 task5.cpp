#include <string>
#include <iostream>
using namespace std;

struct Student {
string name;
int id;
int *mark;
};
	
	void display(Student *,int );
	void inputStudent(Student* ptr, int); 
int main () 

	{
		int marks;
	Student stu; 
	cout<<"\nHOw many marks would you like to insert : ";
	cin>>marks;
	Student* stuPtr = &stu; 
	inputStudent(&stu,marks); 
	display(&stu,marks);
	
	
	}
	void inputStudent(Student *ptr, int marks)
	{ ptr->mark=new int[marks];
		cout<<"\nEnter the name of student : ";
		cin>>(ptr)->name;
		
		cout<<"\nEnter the ID of student : ";
		cin>>(ptr)->id;

	for(int i=0;i<marks;i++)
	{
		cout<<"\nEnter marks of test "<<i+1<<" : ";
		cin>>*((ptr)->mark+i);
	}

		
	}
	void display( Student *ptr, int marks)
	{
		cout<<"\n  name of student : "<<(ptr)->name;
		
		cout<<"\n  ID of student :"<<(ptr)->id;
		cout<<endl;
for(int i=0;i<marks;i++)
{
	cout<<"\nMark "<<i+1<<" : "<<*((ptr)->mark+i)<<' ';

}
delete ptr;
delete (ptr)->mark;

	}
