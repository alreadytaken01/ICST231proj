// pseudorandom.cpp - test program to generate random numbers
// read Random Number Generation on page 188. ;)

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main()
{
	// use the system time generate different seed values
	// this will allow rand() to generate different random numbers
	// time(0) returns the number of seconds since 1/1/1970
	srand(time(0)); 

	// generate pseudorandom numbers. 
	for (int i = 1; i <= 10; i++)
		cout  << rand() % 13 << " ";       // each value is from 0 to 12
	cout << endl;

	for (int i = 1; i <= 10; i++)
		cout << 3 + (rand() % 13) << " ";  // each value is from 3 to 15
	cout << endl;
	return 0;
}

/*
	Exercise:
	1. What is a pseudorandom number?
	2. Does C++ use a similar idea with pseudorandom number to generate random numbers?
	3. What is the formula to generate a pseudorandom number ranging from 0 to 45?
	4. What is the formula to generate a pseudorandom number ranging from 5 to 150?
	5. Write a function that display n volumes of cones such that the value of the 
       radii of the cones are the pseudorandom numbers each ranging from 3 to 200.
       The number of different volumes is determined by the parameter n. Use the 
       function in a complete C++ program.
*/
