#include <string>
#include <iostream>
using namespace std;

struct Student {
string name;
int id;
int mark[3];
};
	
	void display(Student *);
	void inputStudent(Student* ptr); 
int main () 

	{
	Student stu; 
	Student* stuPtr = &stu; 
	inputStudent(&stu); 
	display(&stu);
	
	
	}
	void inputStudent(Student *ptr)
	{
		cout<<"\nEnter the name of student : ";
		cin>>(ptr)->name;
		
		cout<<"\nEnter the ID of student : ";
		cin>>(ptr)->id;

		cout<<"\nEnter the mark 1 of student : ";
		cin>>(ptr)->mark[0];

		cout<<"\nEnter the mark 2 of student : ";
		cin>>(ptr)->mark[1];

		cout<<"\nEnter the mark 3 of student : ";
		cin>>(ptr)->mark[2];

		
	}
	void display( Student *ptr)
	{
		cout<<"\n  name of student : "<<(ptr)->name;
		
		cout<<"\n  ID of student :"<<(ptr)->id;

		cout<<"\n  mark 1 of student : "<<(ptr)->mark[0];

		cout<<"\n  mark 2 of student : "<<(ptr)->mark[1];

		cout<<"\n  mark 3 of student : "<<(ptr)->mark[2];

	}
