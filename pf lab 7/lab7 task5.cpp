#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"\nEnter the size of the array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
	cout<<"\nEnter number "<<i+1<<" : ";
	cin>>arr[i];
}
cout<<"\nThe EVEN number are : \n";
for(int j=0;j<size;j++)
{
	if(arr[j]%2==0)
	cout<<arr[j]<<' ';
}

}

