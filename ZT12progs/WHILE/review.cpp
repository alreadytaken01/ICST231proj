#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double cones(double n)
{
	srand(time(0));
	double b; 
	cout << "How many times would you like to run the program?" << endl;
	cin >> b;
	
	for (int a = 1; a <= b; a++)
	{
	double h = 5 + ( rand() % 86);
	double r = 3 + ( rand() % 201);
	double volume = 3.14159 * pow(r,2) * (h/3);

		cout << " The Raidus is " << r << endl;
		cout << " The Height is " << h << endl;
		cout << " The Volume is " << volume << endl;

	}
}
int main()
{
	double n;
	cones(n);
	return 0;
}
