#include<iostream>
using namespace std;
int main()
{
int a=9,b=9;
 int *pa=&a,*pb=&b;
if(*pa==*pb)
cout<<"\nTheyre equal";
else
cout<<"\nTheyre not";
}

