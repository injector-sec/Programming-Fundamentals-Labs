#include<iostream>
using namespace std;
int main()
{
int arr1[6]={3,5,12,7,9,1},arr2[6]={5,6,8,12,3,0},sum[6];
for(int i=0;i<6;i++)
sum[i]=arr1[i]+arr2[i];
cout<<"\nThe vales of first array are : \n";
for(int j=0;j<6;j++)
cout<<arr1[j]<<' ';
cout<<"\nThe vales of second array are : \n";
for(int j=0;j<6;j++)
cout<<arr2[j]<<' ';
cout<<"\nThe vales of third array are : \n";
for(int j=0;j<6;j++)
cout<<sum[j]<<' ';
}

