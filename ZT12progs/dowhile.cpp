/*

	do-while
	syntax:
	do
	{
		statement(s);
	} while (condition);
*/
#include <iostream>

using namespace std;

int main ()
{
	int h = 32;
	do {

		cout << " Number is : " << h << endl;
		h -= 3;
		

	}while ( h > 4 );
	return 0;

}
