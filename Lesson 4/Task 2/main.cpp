#include <iostream>

using namespace std;

int main()
{
  // Declaring variables
  int firstNumber, secondNumber;
  double result;
  char operation;

  // Getting input
  cout << "Enter 2 whole numbers: ";
  cin >> firstNumber >> secondNumber;
  cout << "Enter operation: ";
  cin >> operation;

  // Doing operation depending on what the operation inputted
  if (operation == '+')
  {
    result = firstNumber + secondNumber;
  }
  else if (operation == '-')
  {
    result = firstNumber - secondNumber;
  }
  else if (operation == '*')
  {
    result = firstNumber * secondNumber;
  }
  else if (operation == '/')
  {
    result = (double)firstNumber / secondNumber;
  }
  else
  {
    result = firstNumber % secondNumber;
  }

  // Displaying the result
  cout << "The result of applying " << operation << " on " << firstNumber << " and " << secondNumber << " is: " << result;

  return 0;
}