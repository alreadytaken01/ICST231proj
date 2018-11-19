/*
	Jeff Danielle E. Bayot
	CSDC101 ZT12
	6.27.2018
	bayot_fiugres.cpp
	
	Problem:
	Write a program that computes for the areas of a circle and  		triangle. It also computes for the volumes of a cone and cube.

	Problem definition:
	baseT - Base of a triangle
	heightT

	Algorithm:
*/
#include <iostream>

using namespace std;

int main();
{
	int baseT, heightT, areaT;

	cout << "Area of a Triangle\n";

	cout << "Base of a Triangle = "
	cin >> baseT;

	cout << "Height of a Triangle = "
	cin >> heightT;

	areaT= (baseT * heightT) /2;

	cout << "Area of a Triangle = " 
		 << (baseT * areaT)/2 << endl;
	return 0;
}
