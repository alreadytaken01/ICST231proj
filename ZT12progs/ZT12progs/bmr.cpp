
#include <iostream>
using namespace std;

int
main ()
{
  int  h, w, a;
  char g='#';

  cout << "Enter 1 for Female and 0 for Male: ";
  cin >> g;
  

  if (g = 0)
    {

      cout << "Basal Metabolic Rate for Male" << endl;
      cout << "" << endl;
      cout << "Please enter your weight in pounds = ";
      cin >> w;
      cout << "Please enter your height in inches = ";
      cin >> h;
      cout << "Please enter your age in years = ";
      cin >> a;

      cout << "BMR = " << 66 + (6.3 * w) + (12.9 * h) - (6.8 * a) / 230<< endl;
    }

  else
    {
      cout << "Basal Metabolic Rate for Female" << endl;
      cout << "" << endl;
      cout << "Please enter your weight in pounds = ";
      cin >> w;
      cout << "Please enter your height in inches = ";
      cin >> h;
      cout << "Please enter your age in years = ";
      cin >> a;

      cout << "BMR = " << 655 + (4.3 * w) + (4.7 * h) - (4.7 * a) / 230 << endl;
    }

  
  return 0;

}

