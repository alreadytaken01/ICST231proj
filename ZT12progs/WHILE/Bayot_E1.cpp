#include <iostream>

using namespace std;

int main ()
{
	int wHours, nDependents, gPay, salary, dependents, net;

	cout << " Enter the number of Hours : ";
	cin >> wHours ;

	cout << " Enter the number of Dependents : ";
	cin >> nDependents;

	salary = 16.78 * (wHours) * 1.5;
	dependents = (nDependents) * 6;
	
	
	cout << " Your Salary is : " << salary << endl;
	cout << " Your Depedent/s is : " << dependents << endl;
	

	return 0;
}
