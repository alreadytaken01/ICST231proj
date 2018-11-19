#include <iostream>

using namespace std;

void disp (double& a, double& b);

void disp (double& a, double& b)
{

	a = 60;
	b = 68;

	

}
int main ()
{

	double a = 50;
	double b = 20;

	cout << a << b << endl;
	disp (a, b);
	cout << a << b << endl;


	return 0;

}

