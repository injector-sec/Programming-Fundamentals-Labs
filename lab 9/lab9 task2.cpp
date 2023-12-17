#include<iostream>
#include<string>
string st(string);
using namespace std;
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
	int sum=0;
	int len=str1.length();
	int word[len];
	word[0]=str1.find(" ");
	for(int i=1;i<=len;i++)
{
 		word[i]=str1.find(" ",word[i-0]);
 		if(word[i]!=string::npos)
 		sum++;
 		else
 		break;
}
return sum;
}

