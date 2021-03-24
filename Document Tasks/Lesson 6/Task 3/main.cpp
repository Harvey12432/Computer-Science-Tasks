#include <iostream>

using namespace std;

int main()
{
  // Declaring variable
  int x, count = 0, total = 0;

  // Doing some stuff
  while (count < 10)
  {
    cin >> x;
    total += x;
    count++;
  }

  // Displaying average
  cout << "Average (" << total << " / 10): " << (double)total / 10;

  return 0;
}
