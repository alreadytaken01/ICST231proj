#include <iostream>

using namespace std;

int main()
{
	float rad, circ, diam, circum, area;

	cout << " Enter The Radius = ";
	cin >> rad;
	cout << " Enter The Circle = ";
	cin >> circ;

	diam = 2 * rad;
	circum = 2 * 3.14159 * rad;
	area = 3.14159 * (rad * rad);

	cout << "The Diameter of a Circle is = " << diam << endl;
	cout << "The Circumference of a Circle is = " << circum << endl;
	cout << "The Area of a Circle is = " << area << endl;
	
	
	 
	return 0;
}
