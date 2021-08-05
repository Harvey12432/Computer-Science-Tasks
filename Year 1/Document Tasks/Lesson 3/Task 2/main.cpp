#include <iostream>

using namespace std;

int main()
{
  // Delcaring a constant called PI
  const double PI = 3.14;

  // Delcaring variables
  double radius;

  // Input from user
  cout << "Enter radius: ";
  cin >> radius;

  // Calculating and displaying
  cout << "Area: " << PI * (radius * radius) << endl;
  cout << "Circumference: " << PI * (radius * 2);

  return 0;
}