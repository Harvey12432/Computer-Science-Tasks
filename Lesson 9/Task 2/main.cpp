#include <iostream>

using namespace std;

int main()
{
  int arr[8];

  for (int i = 0; i < 8; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 8; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  for (int i = 7; i > -1; i--)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
