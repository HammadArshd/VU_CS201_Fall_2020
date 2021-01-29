#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{    
	float totaltax = 0, totalfund = 0, fund = 600, salaryA = 125000, salaryB = 80000, salaryC = 45000, Annaul_SalaryA=0,
	 Annaul_SalaryB=0, Annaul_SalaryC=0,salaryofall = 0, taxA = 0, taxB = 0, taxC = 0, netsalaryA = 0, netsalaryB = 0, netsalaryC = 0;
	 int num=0;
		

	//Monthly welfare fund
	totalfund = 10*fund;
	
	//Annual salaries
	Annaul_SalaryA = salaryA*12;
	Annaul_SalaryB = salaryB*12;
	Annaul_SalaryC = salaryC*12;
	
	// Checking tax eligibility and Monthly Tax Calculation
	if(Annaul_SalaryA > 600000)
	{
		taxA = salaryA*.01;
	}
	
	if(Annaul_SalaryB > 600000)
	{
		taxB = salaryB * .01;
	}

	if(Annaul_SalaryC > 600000)
	{
		taxC = salaryC * .01;
	}
	else
	{
		taxC = 0;
	}
	totaltax = taxA*2 + taxB*3 + taxC*5;
	
	//Net salaries after deduction
	
	netsalaryA = salaryA - taxA - fund;
	netsalaryB = salaryB - taxB - fund;
	netsalaryC = salaryC - taxC - fund;
	
	//Total amount paid by university
	
	salaryofall = salaryA*2 + salaryB*3 + salaryC*5;
	
	
	cout<<"Total Monthly Tax deduction of all employees :\t"<<totaltax<<endl; 
	cout<<" Total amount of Welfare Fund collected : \t"<<totalfund<<endl;
	cout<<" Net monthly salary of A Level employee : \t"<<netsalaryA<<endl;
	cout<<" Net monthly salary of B Level employee : \t"<<netsalaryB<<endl;
	cout<<" Net monthly salary of C Level employee : \t"<<netsalaryC<<endl;
	cout<<" Total amount paid by university after a month :\t"<<salaryofall<<endl;
	cout<<endl;
	//Separate details of tax collection
	cout<<"Enter 1 to know the tax collection of Level A employees "<<endl;
	cout<<"Enter 2 to know the tax collection of Level B employees "<<endl;
	cout<<"Enter 3 to know the tax collection of Level C employees "<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"tax collection of Level A employees is Rs."<<taxA*2<<endl;
	}
	else if (num==2)
	{
		cout<<"tax collection of Level B employees is Rs."<<taxB*3<<endl;
	}
	else if (num==3)
	{
		cout<<"tax collection of Level C employees is Rs."<<taxC*5<<endl;
	}
	else
	{
		cout<<"Incorrect input";
	}
	
}
