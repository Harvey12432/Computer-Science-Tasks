#include <iostream>

using namespace std;

int main()
{
  int array[10], index;

  array[0] = 2;
  array[1] = 3;

  for (int i = 0; i < 10; i++)
  {
    cin >> array[i];
  }

  cout << "Enter index: ";
  cin >> index;
  cout << array[index];

  return 0;
}
