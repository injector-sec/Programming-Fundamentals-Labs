#include<iostream>
#include<string>
using namespace std;
string my_lower(string);
int main()
{
string str,res;
cout<<"\n Enter your string here : ";
getline(cin,str);
res=my_lower(str);
cout<<"\nHere is lower case :   "<<res;
}
string my_lower(string g)
{ 
int len=g.length();
int arr[len];
for(int i=0;i<len;i++)
{
	if(g[i]>=65&&g[i]<96)
	{
		g[i]+=32;
	}
}
return g;
}
