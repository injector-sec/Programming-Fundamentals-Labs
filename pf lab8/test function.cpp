#include<iostream>
using namespace std;
//void display();
int add(int, int);
int mult(int,int);
int  div(int,int);
int mod(int,int);
int sub(int,int);
int main()
{
int divi,mul,sum,modi,subt,num1,num2;
cout<<"\nEnter number 1 : ";
cin>>num1;
cout<<"\nEnter number 2 : ";
cin>>num2;
sum=add(num1,num2);
cout<<"\nNo 1 : "<<num1<<endl<<"No 2 : "<<num2<<endl<<endl;
cout<<"addition : "<<sum;
subt=sub(num1,num2);
cout<<"\nSubtracttrion : "<<subt;
divi=div(num1,num2); 
cout<<"\nDivision : "<<divi;
mul=mult(num1,num2);
cout<<"\nMultiplication : "<<mul;
modi=mod(num1,num2);
cout<<"\nRemainder : "<<modi;

}
int add(int n1,int n2)
{
	int r=n1+n2;
return 	r;
}
int sub(int n1,int n2)
{
int r= n1-n2;
return r;	
}
int div(int n1,int n2)
{
	int r= n1/n2;
return r;	
}
int mult(int n1,int n2)
{
	int r=n1*n2;
return r; 	
}
int  mod(int n1,int n2)
{
	int r=n1%n2;
return r; 	
}
