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

int numOfEmployees()
{
	int numOfEmployees;
	cout << "Please enter number of employees in the company: ";
	cin >> numOfEmployees;
	return numOfEmployees;
}
int totDaysAbsent(int numOfEmployees)
{
	
	
}
