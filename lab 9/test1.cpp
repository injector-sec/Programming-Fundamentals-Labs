#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"\nEnter the soze of the array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
	cout<<"\nEnter number "<<i+1<<" : ";
	cin>>arr[i];
}


int arr2[size];
for(int i=0;i<size;i++)
arr2[i]=arr[i]; //2,4,5,1

		for(int i=0;i<size;i++) //j=0,i=0,
{
		for(int j=0;j<size;j++)
		

}
for(int j=0;j<size;j++)
cout<<arr2[j]<<' ';
}

