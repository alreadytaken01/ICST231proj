
#include <iostream>

using namespace std;

int main()
{
	int a,b ;

	cout << "Enter The First Integer = ";
	cin >> a;
	cout << "Enter The Second Integer = ";
	cin >> b;

	if ( a > b )
		cout << " The First Integer is larger "<< endl ;
	else if ( b > a )
		cout << " The Second Integer is larger "<< endl ;
	else if ( a == b)
		cout << " The Numbers Are Equal " << endl ;

	return 0;
}
