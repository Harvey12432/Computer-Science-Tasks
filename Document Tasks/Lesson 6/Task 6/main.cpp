#include <iostream>

using namespace std;

int main()
{
  int x;

  do
  {
    cin >> x;
  } while (x <= 10 || x >= 20);

  cout << x << " is between 10 and 20";

  return 0;
}
