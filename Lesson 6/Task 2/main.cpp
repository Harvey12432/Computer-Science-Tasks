#include <iostream>

using namespace std;

int main()
{
  // Delcaring variables
  int n, count, total = 0;

  // Getting input from user
  cout << "Enter number: ";
  cin >> n;

  // Doing someshit
  count = 1;
  while (count <= n)
  {
    total += count;
    count++;
  }

  // Displaying average
  cout << "Average (" << total << " / " << n << "): " << (double)total / n;

  return 0;
}
