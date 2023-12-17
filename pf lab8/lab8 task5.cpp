#include<iostream>
#include<iomanip>
using namespace std;
float per(float,float);
int main()
{
float perc,total,obtained;
cout<<"\nENter the total marks : ";
cin>>total;
cout<<"\nEnter the obtained marks : ";
cin>>obtained;
perc=per(total,obtained);
cout<<"\nThe percentaeg is : "<<setprecision(2)<<fixed<<perc<<'%';

}
float per(float tot,float ob)
{
	float perc=(ob/tot)*100;
	return perc;
}
