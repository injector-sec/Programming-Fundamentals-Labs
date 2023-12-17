#include<iostream>
using namespace std;
struct Product{
	string name,model;
	int price;
};
void display(Product arr[])
{

	for(int i=0;i<4;i++)
{
	cout<<"\nName : "<<arr[i].name;
	cout<<"\nmodel : "<<arr[i].model;
	cout<<"\nPrice : "<<arr[i].price;
	cout<<endl;
}
}
int main()
{
		Product arr[4];

			for(int i=0;i<4;i++)
			{
				cout<<"Name : ";
				cin>>arr[i].name;
				cout<<"\nmodel : ";
				cin>>arr[i].model;
				cout<<"\nPrice : ";
				cin>>arr[i].price;
			}
			
			display(arr);

}


