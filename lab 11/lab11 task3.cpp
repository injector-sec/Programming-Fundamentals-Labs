#include<iostream>
using namespace std;

struct Employee{
	int emp_num;
	string emp_name;
	float b_sal,h_all,m_all,tax,g_sal,net_sal;
};

Employee empSalary(Employee );
void display(Employee);
//main
		int main()
		{
			Employee e1,temp;
		cout<<"\nEnter Employee ID : ";
		cin>>e1.emp_num;
		cout<<"\nEnter Employee name : ";
		cin>>e1.emp_name;
		cout<<"\nEnter Basic Salary : ";
		cin>>e1.b_sal;
		temp=empSalary(e1);
		display(temp);
		

		}
		
		//function
		Employee empSalary(Employee e1)
		{
			e1.h_all=0.1*e1.b_sal;
			e1.m_all=0.05*e1.b_sal;
			e1.tax=0.04*e1.b_sal;
			e1.g_sal=e1.b_sal+e1.h_all+e1.m_all;
			e1.net_sal=e1.g_sal-e1.tax;
			return e1;
		}
		void display(Employee e1){
			cout<<"\n**************************";
			cout<<"\nEMPLOYEE SALARY CALCULATOR";
			cout<<"\n**************************\n\n";
			cout<<"\nEmployee Number : "<<e1.emp_num;
			cout<<"\nEmployee Name : "<<e1.emp_name;
			cout<<"\nBasic Salary : "<<e1.b_sal;
			cout<<"\nHouse allowance : "<<e1.h_all;
			cout<<"\nMedical allowance : "<<e1.m_all;
			cout<<"\nGross Salary : "<<e1.g_sal;
			cout<<"\nTAx Deduction : "<<e1.tax;
			cout<<"\nNet Salary : "<<e1.net_sal;
		}

