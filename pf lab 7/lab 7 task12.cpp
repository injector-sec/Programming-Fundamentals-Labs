#include<iostream>
using namespace std;
int main()
{
int search,size;
int a=-1;
cout<<"\nEnter the size of the array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
	cout<<"\nEnter value number "<<i+1<<" : ";
	cin>>arr[i];
}
cout<<"\nEnter the number you want to search : ";
cin>>search;
for(int k=0;k<size;k++)
{
	if(arr[k]==search)
	
		a=k;
	
}
if(a>-1)
cout<<endl<<search<<" is present at the index "<<a;
else
cout<<endl<<search<<" is not present in the array ";
}

