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
	
	//test if negative
	if (num < 0)
		cout << "Negative Number\n";

	//test if zero		
	if (num == 0)
		cout << "Zero Number\n";
	return 0;
}
