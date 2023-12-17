#include<iostream>
using namespace std;
int main()
{
int i,j,m;
int size;
cout<<"\nEnter the size of Array : ";
cin>>size;
int arr[size];
for(i=0;i<size;i++)
{
cout<<"\nEnter value "<<i+1<<" : ";
cin>>arr[i];
}
int dup[size];
int p=size-1;
	for(j=0;j<size;j++)
	{	
	dup[j]=	arr[p--];
	
	}




cout<<"\nThe values of the first array are : \n";
for(int k=0;k<size;k++)
cout<<arr[k]<<' ';
cout<<"\nThe values of second array are : \n";
for(int m=0;m<size;m++)
cout<<dup[m]<<' ';

}

