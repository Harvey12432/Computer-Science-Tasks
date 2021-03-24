#include <iostream>
#include <conio.h>

using namespace std;

void inArray(int arr[], int number)
{
  bool found;

  for (int i = 0; i < 20; i++)
  {
    if (arr[i] == number)
    {
      found = true;
    }
  }

  if (found)
  {
    cout << number << " has been found in the array";
  }
  else
  {
    cout << number << " has not been found in the array";
  }
}

int main()
{
  int array[20], number;

  for (int i = 0; i < 20; i++)
  {
    cin >> array[i];
  }

  cout << "Enter number you want to find: ";
  cin >> number;

  inArray(array, number);

  getch();

  return 0;
}
