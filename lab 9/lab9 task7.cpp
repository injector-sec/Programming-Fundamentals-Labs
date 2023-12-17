
#include<iostream>
#include<string>
using namespace std;
string pld(string);
int main()
{
string str,res;
cout<<"\nEnter your string : ";
getline(cin,str);
res=pld(str);
cout<<endl<<res;

}
string pld(string inp)
{
	bool check=false;
	string result, arr;
	int len=inp.length();
	for(int i=0;i<len;i++)
	{
		arr[i]=inp[i];
	}
	int p=len-1;
for(int i=0;i<len;i++)
{
	if(arr[i]==inp[p]) //asrar rarsa 
	check=true;
	else
	check=false;
	p--;
	}	
	if(check==true)
	result="The string is pailindrome";
	else
	result="The string is not pailindrome";
	return result;
}
