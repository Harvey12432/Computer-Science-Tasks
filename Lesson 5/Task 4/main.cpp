#include <iostream>

using namespace std;

int main()
{
  // Declaring constants
  const int MIN_ALLOWED = 88, MAX_ALLOWED = 220;
  const double KILO = 2.2;
  // Declaring variables
  double kilogram, pounds;

  // Getting input from user
  cout << "Enter your weight in kg:";
  cin >> kilogram;

  // Converting kilogram to pounds
  pounds = kilogram * KILO;

  // Displaying weight in pounds
  cout << "Your weight in pounds: " << pounds << endl;

  // Checking if they can skydive
  if (pounds >= MIN_ALLOWED & pounds <= MAX_ALLOWED)
  {
    cout << "You can sky dive";
  }
  else if (pounds < MIN_ALLOWED)
  {
    cout << "Your weight is below the acceptable limits";
  }
  else
  {
    cout << "Your weight is above the acceptable limits";
  }

  return 0;
}
