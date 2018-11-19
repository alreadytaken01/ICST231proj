#include <iostream>

using namespace std;

int main()
{
	int a, b, modl;
	
	cout << "First Number = ";
	cin >> a;

	cout << "Second Number = ";
	cin >> b;

	if ( a % 2 == 0 )
		cout << "The First Number Is Even" << endl ;
	else
		cout << "The First Number Is Odd" << endl ;

	if ( b % 2 == 0 )
		cout << "The Second Number Is Even" << endl ;
	else
		cout << "The Second Number Is Odd" << endl ;

	return 0;
}
