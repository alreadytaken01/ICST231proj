/* 
	 numTest.cpp
	 Tests if num is positive, negative, or zero
	 syntax: if (condition)
				statment(s);
*/
#include <iostream>

using namespace std;

int main()
{
	int num;
	
	// read a number
	cout << "Number = ";
	cin >> num;

	//test if positive
	if (num > 0)
		cout << "Positive Number\n";

	else if (num < 0)
		cout << "Negative Number\n";

	else
		cout << "Zero Number\n";
	return 0;
}
