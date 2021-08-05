#include <iostream>

using namespace std;

int main()
{
  // Declaring variables
  int number;

  // Getting input from user
  cout << "Enter number: ";
  cin >> number;

  // Checking if the number is even or odd
  if (number % 2 == 0)
  {
    cout << "The number " << number << " is an even number";
  }
  else
  {
    cout << "The number " << number << " is an odd number";
  }

  cout << endl;

  // Checking if the number is 0, positive or negative
  if (number == 0)
  {
    cout << "Number is 0";
  }
  else if (number > 0)
  {
    cout << "Number is positive";
  }
  else
  {
    cout << "Number is negative";
  }

  return 0;
}