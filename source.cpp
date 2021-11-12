/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 4
 * Description: Employee absence summary
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Knight
*/

#include <iostream>
#include <fstream>
using namespace std;

int numOfEmployees();
int totDaysAbsent(int numOfEmployees);
double averageAbsent(double numEmployees, double daysAbsent);

ofstream myfile;

int main()
{
	myfile.open("employeeAbsences.txt");
	myfile << "EMPLOYEE ABSENCE REPORT" << endl
		<< "employee id     " << "days absent" << endl;
	int numberOfEmployees, totalDaysAbsent, avgDaysAbsent;
	numberOfEmployees = numOfEmployees();
	totalDaysAbsent = totDaysAbsent(numberOfEmployees);
	avgDaysAbsent = averageAbsent((double)numberOfEmployees, (double)totalDaysAbsent);
	myfile << "The " << numberOfEmployees << " employees were absent a total of " << totalDaysAbsent << " days."
		<< endl << "The average number of days absent is " << avgDaysAbsent << " days.";

	myfile.close();
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

//calculates number of days each employee was absent and returns total days absent of each person
int totDaysAbsent(int numOfEmployees)
{
	int i = numOfEmployees, identification, daysAbsent, totDaysAbsent = 0, daysAbsentLapse1 = 0;
	for (int j = i; j > 0; j--)
	{
		identification = 0;
		cout << "Please enter an employee ID: ";
		cin >> identification;
		myfile << identification << "            ";
		cout << "Please enter the number of days this employee was absent: ";
		cin >> daysAbsent;
		myfile << daysAbsent << endl;
		totDaysAbsent = daysAbsent + daysAbsentLapse1;
		daysAbsentLapse1 = daysAbsent;
	}
	return totDaysAbsent;
}

//calculates the average number of days employees were absent
double averageAbsent(double numEmployees, double daysAbsent)
{
	double averageDaysAbsent = daysAbsent / (double)numEmployees;
	return averageDaysAbsent;
}
