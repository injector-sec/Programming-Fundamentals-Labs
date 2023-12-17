#include<iostream>
using namespace std;
int main()
{
int arr[3]={6,7,8},arr2[5]={1,2,3,4,5},arr3[8];
for(int i=0;i<3;i++)
{
	arr3[i]=arr[i];
}
int p=0;
for(int j=3;j<8;j++)
{
	arr3[j]=arr2[p];
	p++;
}
cout<<"\nThe values of first array are : \n";
for(int i=0;i<3;i++)
cout<<arr[i]<<' ';
cout<<"\nThe values of second array are : \n";
for(int i=0;i<5;i++)
cout<<arr2[i]<<' ';
cout<<"\nThe values of third array are : \n";
for(int i=0;i<8;i++)
cout<<arr3[i]<<' ';

}

