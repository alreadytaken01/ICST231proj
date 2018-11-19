#include <iostream>  
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int a = 3, aa, aaaa;
		
		while ( a >= 3 && a <=17 ) {
			cout<< a << endl;
		aa = a * a;
		aaaa = a * a * a * a;
			cout <<" X ^ 2 : " << setw(10) << aa << endl;
			cout <<" X ^ 4 : " << setw(10) << aaaa << endl;
			a++;
		

	}
	return 0;
}
