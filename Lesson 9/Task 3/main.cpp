#include <iostream>

using namespace std;

int main()
{
  char array[20];
  int count = 0;

  for (int i = 0; i < sizeof(array); i++)
  {
    cin >> array[i];
    if (array[i] == 'e' || array[i] == 'E')
    {
      count++;
    }
  }

  cin >> count;

  return 0;
}