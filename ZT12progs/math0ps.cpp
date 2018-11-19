/*
	math0ps.cpp
 reads two nos. and outputs the sum, difference, product, quotient,and modules
*/
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, sumpot, diffpot, prodpot, quotpot, modpot;
	
	// read two nos.
	// cin - input stream object
	// >> - extraction operator
	cout << "First number = ";
	cin	 >> num1;

	cout << "Second number = ";
	cin  >> num2;
	
	// compute for sum
	sumpot = num1 + num2;
	diffpot = num1 - num2;
	prodpot = num1 * num2;
	quotpot = num1 / num2;
	modpot = num1 % num2;
	// output sum
	cout << "Sum = " << sumpot << endl;
	cout << "Difference = " << diffpot << endl;
	cout << "Product = " << prodpot << endl;
	cout << "Quotient = " << quotpot << endl;
	cout << "Modulus = " << modpot << endl;
	return 0;
}
