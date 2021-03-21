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
  for (int i = 0; i < n; i++)
  {
    total += count;
    count++;
  }

  // Displaying average
  cout << "Average (" << total << " / " << n << "): " << (double)total / n;

  return 0;
}
