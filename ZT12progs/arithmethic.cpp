#include <iostream>

using namespace std;

int main()
{
	//declaration
	int a, b, c, sum, prod, ave ;
	cout << " Enter The First Number = ";
	cin >> a;
	cout << " Enter The Second Number = ";
	cin >> b;
	cout << " Enter The Third Number = ";
	cin >> c;
	
	//process
	sum = a + b + c;
	prod = a * b * c;
	ave = sum/3;

	//output
	cout << " The Sum is = " << sum << endl;
	cout << " The Product is = " << prod << endl;
	cout << " The Average is = " << ave << endl;
	
	//smallest
	if ( a < b and a < b )
		cout << " The Smallest number is = " << c << endl;
	else if ( b < a and b < c )
		cout << " The Smallest number is = " << c << endl;
	else if ( c < a and c < b )
		cout << " The Smallest number is = " << c << endl;

	
	//largest
	if ( a > b and a > c )	
		cout << " The Largest number is = " << a << endl;
	else if ( b > a and b > c )
		cout << " The Largest number is = " << b << endl;
	else if ( c > b and c > a )
		cout << " The Largest number is = " << c << endl;

	

	
	
	
	return 0;
}
