#include <iostream>

using namespace std;

int main()
{
  const char VOWELS[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  char array[20];
  int count = 0;

  for (int i = 0; i < sizeof(array); i++)
  {
    cin >> array[i];
    for (int j = 0; j < sizeof(VOWELS); j++)
    {
      if (array[i] == VOWELS[j])
      {
        count++;
      }
    }
  }
  cout << count;

  return 0;
}