#include<iostream>
using namespace std;
int main()
{
int arr1[6]={1,5,3,2,4,8}, arr2[6];
for(int i=0;i<6;i++)
{
	arr2[i]=arr1[i];
}
cout<<"The values of first array are \n";
for(int j=0;j<6;j++)
{
	cout<<arr1[j]<<' ';
}
cout<<"\nThe values of second array are \n";

	for(int k=0;k<6;k++)
	cout<<arr2[k]<<' ';
}

