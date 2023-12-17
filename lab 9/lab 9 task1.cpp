#include<iostream>
#include<string>
using namespace std;
int main()
{
string date;
cout<<"ENter the date (DD/MM/YYYY) : ";
getline(cin,date);
cout<<endl<<date;
int len=date.length();
string d=date.substr(0,2);
string m=date.substr(3,2);
string y=date.substr(6,4);
cout<<endl<<"date : "<<d;
cout<<endl<<"month : "<<m<<"\nYear : "<<y;
}

