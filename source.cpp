#include <iostream>
#include <fstream>
using namespace std;
int numOfEmployees();
int totDaysAbsent(int numOfEmployees);
ofstream file;
int main()
{
	int numberOfEmployees;
	numberOfEmployees = numOfEmployees();
	totDaysAbsent(numberOfEmployees);

	return 0;
}

//gets number of employees
int numOfEmployees()
{
	int numOfEmployees;
	cout << "Please enter number of employees in the company: ";
	cin >> numOfEmployees;
	return numOfEmployees;
}
int totDaysAbsent(int numOfEmployees)
{
	int i = numOfEmployees;
	
	for (int j = i; j > 0; j--)
	{
		cout << "Please enter an employee ID: ";
	}
}
