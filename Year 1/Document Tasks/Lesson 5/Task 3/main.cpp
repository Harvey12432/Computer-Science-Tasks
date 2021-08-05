#include <iostream>

using namespace std;

int main()
{
  // Declaring variables
  int a, b, c;

  // Getting input from user
  cout << "Enter 3 numbers: ";
  cin >> a >> b >> c;

  // Doing comparison checks to see which variable has a bigger number and then displaying it
  if (a > b && a > c)
  {
    cout << a << " is larger than " << b << " and " << c;
  }
  else if (b > a && b > c)
  {
    cout << b << " is larger than " << a << " and " << c;
  }
  else
  {
    cout << c << " is larger than " << a << " and " << b;
  }

  return 0;
}
