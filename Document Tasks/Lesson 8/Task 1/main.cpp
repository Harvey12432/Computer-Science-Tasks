#include <iostream>

using namespace std;

void swapNumbers(int &a, int &b)
{
  int temp;
  temp = b;
  b = a;
  a = temp;
}

int main()
{
  int a, b;

  cout << "Enter values for A and B: ";
  cin >> a >> b;
  cout << "Before Swap: A = " << a << ", B = " << b << endl;
  swapNumbers(a, b);
  cout << "After Swap: A = " << a << ", B = " << b;

  return 0;
}
