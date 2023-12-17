#include<iostream>
using namespace std;
int main()
{
	int arr[3][2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
		cout<<"Enter the value for row "<<i+1<<" and column "<< j+1<< " : ";
		cin>>arr[i][j];
	}
}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
		
	}
}
