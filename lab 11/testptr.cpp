#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int;
for(int i=0;i<5;i++)
{
	cin>>*(p+i);
}


//for(int i=0;i<5;i++)
{
	cout<<*(p+3);
}
delete p;
return 0;
}

