#include<iostream>
using namespace std;
int st(string);
int main()
{
int a;
string str;
cout<<"\nEnter the String : ";
getline(cin,str);
a=st(str);
cout<<"\nNumber of words : "<<a;
}
int st(string str1)
{
int len=str1.length();
return len;
}

