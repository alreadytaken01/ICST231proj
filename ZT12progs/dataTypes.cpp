#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	// character
	char c ='#';

	//integral types
	int i = -527;
	long l = 7123545;

	// floating-point types
	float f = 45345.89;
	double d =234.4e8;

	//boolean
	bool b = false;

	// string
	string s ="data types";

	cout << "character Type\n"
		 << "c(char) = " << c << endl;

	cout << "Integral Types\n" 
		 << "i(int) = " << endl 
		 << "l(long) = " << l << endl;
	
	cout << "Floating-Point Types\n"
		 << "f(float)  = " << f << endl
		 << "d(double) = " << d << endl;

	cout << "Boolean Type\n"
		 << "b(bool) = " << b << endl;

	cout << "String Type\n"
		 << "s(string) = " << s << endl;
	return 0;
}
