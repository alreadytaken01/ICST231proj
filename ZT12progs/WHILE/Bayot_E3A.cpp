#include <iostream>

using namespace std;

int main()
{
	
	int num, v, x, l, c, d, m, n;
	char yes = 'y';

	while ( yes == 'y' or yes == 'Y' )
	{
		cout << "Enter a year between 1900-3000" << endl;
		cin>> num;
		if (num >= 1000)
		{
			m = num / 1000;
			n = 0;
					for (n; n < m; n++)
					cout << "M";
					num = num%1000;
		}
		if (num >= 900)
		{
			num = num%900;
		}
					else if ( num >= 500 )
						{
						for (n; n < d; n++)
						cout << "D";
						}
					num = num%500;
		if (num >= 400 )
		{
			num = num%400;
			cout << "CD";
		}
					else if (num >= 100)
					{
						c = num%100;
						for (n; n < c; n++)
						cout << "D";
					}
		if (num >= 90)
		{
			num = num%90;
			cout << "XC";
		}
					else if ( num >= 50)
					{
						l = num%50;
					}			
	}
	return 0;
}
