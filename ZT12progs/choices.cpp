#include <iostream>

using namespace std;

int main ()
{
	int menu;
	system("clear");
	cout <<"[NBA 2018 VOTE FOR MVP CANDIDATES]\n";
	cout <<"1. Lebron James\n";
	cout <<"2. James Harden\n";
	cout <<"3. Anthony Davis\n";	
	
	cout << "Choice = ";
	cin >> menu;

	switch(menu)
	{
		case 1:
		cout <<"Lebron James\n";
		cout <<" 28 Points Per Game\n";
		cout <<" 8 Rebounds Per Game\n";
		cout <<" 9 Assists Per Game\n";
				break;
		case 2:
		cout <<"James Harden\n";
		cout <<" 30 Points Per Game\n";
		cout <<" 5 Rebounds Per Game\n";
		cout <<" 8 Assists Per Game\n";
				break;
		case 3:
		cout <<"Anthony Davis\n";
		cout <<" 28 Points Per Game\n";
		cout <<" 11 Rebounds Per Game\n";
		cout <<" 2 Assists Per Game\n";
				break;
	default: cout << " Not Found\n";
	}
	return 0;
}
