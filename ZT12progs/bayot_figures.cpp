
#include <iostream>

using namespace std;

int main()
{
    int choiceE;

	double baseA, heightA, areaA, cube, volta, volume, radius, heightB;

	cout << " [Compute for Area of Triangle, Circle or Volume of a Cone, Cube]\n";
	cout <<" 1. Area of a Triangle\n";
	cout <<" 2. Area of a Circle\n";
	cout <<" 3. Volume of a Cone\n";
	cout <<" 4. Area of a Cube\n";
	cout << " Choice = ";
	cin >> choiceE;
    

	if ( choiceE == 1)
	{
    areaA = (baseA * heightA)/2;	
	cout << "Area of a Triangle\n";    
    cout << "Enter the Base = ";
    cin >> baseA;
    cout << "Enter the Height= ";
    cin >> heightA;	
	cout << "Area of a triangle = "
         << (areaA=(baseA * heightA)/2) << endl;
	}
	else if ( choiceE == 2)
    {
	cube = (volta * volta * volta);
	volume = 3.14159 * (radius * radius) * heightB/3; 
    cout << "Enter the Volume= ";
    cin >> volta;
	cout << "Enter the Radius = ";
	cin >> radius;          
    cout << "Side of a Cube = "
        << (volta * volta * volta) << endl;
	}
	else if ( choiceE == 3 )
    {
	}
    return 0;
}
