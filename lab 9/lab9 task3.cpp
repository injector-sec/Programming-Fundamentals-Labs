#include<iostream>
using namespace std;
string net(string);
int main()
{
string output,num;
cout<<"\nEnter your Number : ";
cin>>num;
output=net(num);
cout<<"\nYour Network is "<<output;
}
string net(string no)
{
	string ntw;
	string network;
	network=no.substr(0,4);
	if(network=="0300")
	ntw="Mobilink";
	else if(network=="0315")
	ntw="Zong";
	else if(network=="0333")
	ntw="Ufone";
	else if(network=="0345")
	ntw="Telenor";
	return ntw;
}

