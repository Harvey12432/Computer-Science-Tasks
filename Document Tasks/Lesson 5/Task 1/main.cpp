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
  switch (operation)
  {
  case '+':
    result = firstNumber + secondNumber;
    break;
  case '-':
    result = firstNumber - secondNumber;
    break;
  case '*':
    result = firstNumber * secondNumber;
    break;
  case '/':
    result = (double)firstNumber / secondNumber;
    break;
  case '%':
    result = firstNumber % secondNumber;
    break;
  }

  // Displaying the result
  cout << "The result of applying " << operation << " on " << firstNumber << " and " << secondNumber << " is: " << result;

  return 0;
}