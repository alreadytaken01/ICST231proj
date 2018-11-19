//Write a program that displays the numbers 3 to 29 vertically if the number is exactly divisible by 2 and greater than 19 display your initial x times where x represents as the number.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 3, b = 1;

	while ( a >= 3 && b <= 29){

		cout << a << " ";

		if ( a % 2 == 0 && a > 19 )
			{
				while ( b <= a ){
				cout << " JB " ;
				b++;
				}
			}
		a++;
		cout << endl;

	}	


	return 0;

}
