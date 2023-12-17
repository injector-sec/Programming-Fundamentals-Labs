#include<iostream>
using namespace std;
char grade(float);
int main()
{
float perc;
char grd;
cout<<"\nEnter your percentage : ";
cin>>perc;
grd=grade(perc);
cout<<"\nYour grade is "<<grd;
}
char grade(float perc)
{
	char g;
if(perc>=80&&perc<=100)
	g='A';
if(perc>=70&&perc<80)
	g='B';
if(perc>=60&&perc<70)
	g='C';
if(perc>=0&&perc<60)
	g='F';
return g;
	
}
