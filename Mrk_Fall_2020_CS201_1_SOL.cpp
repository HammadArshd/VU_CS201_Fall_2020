#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

/**
 * Calculates tax 
 *
 * @param salary Monthly salary.
 * @return amount of tax needs to be deducted from monthly salary.
 */
int calculate_tax(int salary, int tax_percent)
{
    return (salary * tax_percent) / 100;
}

/**
 * Calculates tax 
 *
 * @param gross_salary gross monthly salary.
 * @param monthly_tax amount of monthly tax.
 * @param monthly_welfare_fund amount of monthly welfare fund.
 * @return net salary = gross_salary - monthly_tax - monthly_welfare_fund.
 */
int net_monthly_salary(int gross_salary, int monthly_tax, int monthly_welfare_fund)
{
    return gross_salary - monthly_tax - monthly_welfare_fund;
}

int total_tax_per_category(int tax, int employees)
{
    return tax * employees;
}

int main()
{
    // number of employees in each category
    int level_a_employees = 2;
    int level_b_employees = 3;
    int level_c_employees = 5;

    // total employees of all categories
    int total_employees = level_a_employees + level_b_employees + level_c_employees;

    // Monthly salary of each category
    int level_a_salary = 125000;
    int level_b_salary = 80000;
    int level_c_salary = 45000;

    // annual salary of each category
    int annual_salary_of_level_a_employee = level_a_salary * 12;
    int annual_salary_of_level_b_employee = level_b_salary * 12;
    int annual_salary_of_level_c_employee = level_c_salary * 12;

    // fund deducted per month
    int fund_per_month = 600;

    // total funds deducted per month from all employees
    int total_fund_per_month = fund_per_month * total_employees;

    // percentage of tax on deducted from monthly salary
    int tax_percent = 1;

    // check if employee category meets the condition and calculate tax amount
    int tax_a = 0, tax_b = 0, tax_c = 0;
    if (annual_salary_of_level_a_employee > 600000)
    {
        tax_a = calculate_tax(level_a_salary, tax_percent);
    }

    if (annual_salary_of_level_b_employee > 600000)
    {
        tax_b = calculate_tax(level_b_salary, tax_percent);
    }

    if (annual_salary_of_level_c_employee > 600000)
    {
        tax_c = calculate_tax(level_c_salary, tax_percent);
    }

    // total tax collected from each category
    int total_a_tax = total_tax_per_category(tax_a, level_a_employees);
    int total_b_tax = total_tax_per_category(tax_b, level_b_employees);
    int total_c_tax = total_tax_per_category(tax_c, level_c_employees);

    // total tax collected monthly from all categories
    int total_tax = total_a_tax + total_b_tax + total_c_tax;

    // net monthly income after deduction of tax and funds - for each category
    int net_monthly_salary_of_level_a_employee = net_monthly_salary(level_a_salary, tax_a, fund_per_month);
    int net_monthly_salary_of_level_b_employee = net_monthly_salary(level_b_salary, tax_b, fund_per_month);
    int net_monthly_salary_of_level_c_employee = net_monthly_salary(level_c_salary, tax_c, fund_per_month);

    // amount paid by university after a month
    int total_amount_per_month = (level_a_salary * level_a_employees) +
                                 (level_b_salary * level_b_employees) +
                                 (level_c_salary * level_c_employees);

    cout << "Total Monthly Tax deduction of all employees : " << total_tax << endl;
    cout << "Total amount of Welfare Fund collected: " << total_fund_per_month << endl;

    cout << "Net monthly salary of A Level employee : " << net_monthly_salary_of_level_a_employee << endl;
    cout << "Net monthly salary of B Level employee : " << net_monthly_salary_of_level_b_employee << endl;
    cout << "Net monthly salary of C Level employee : " << net_monthly_salary_of_level_c_employee << endl;

    cout << "Total amount paid by university after a month : " << total_amount_per_month << endl;
    cout << endl;

    int choice = 0;
    // Ask user for input a choice
    cout << "Enter 1 to know the tax collection of Level A employyes" << endl;
    cout << "Enter 2 to know the tax collection of Level B employyes" << endl;
    cout << "Enter 3 to know the tax collection of Level C employyes" << endl;
    cin >> choice;

    // based on user's input - print the tax for that specific category
    if (choice == 1)
    {
        cout << "tax collection of Level A employees is Rs. " << total_a_tax << endl;
    }
    else if (choice == 2)
    {
        cout << "tax collection of Level B employees is Rs. " << total_b_tax << endl;
    }
    else if (choice == 3)
    {
        cout << "tax collection of Level C employees is Rs. " << total_c_tax << endl;
    }
    else
    {
        cout << "incorrect input" << endl;
    }

    return 0;
}

/**
 * Fall-2020_CS201_1_Solution.cpp
 */