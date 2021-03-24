#include <iostream>

using namespace std;

int main()
{
  int x, total = 0;

  do
  {
    cin >> x;
    total += x;
  } while (x != 0);

  cout << "The total is " << total;
  return 0;
}
