#include <iostream>

using namespace std;

int main()
{
  int count = 0, total = 0;

  while (count <= 100)
  {
    if (count % 2 == 1)
    {
      total += count;
    }
    count++;
  }
  cout << "Total: " << total;

  return 0;
}
