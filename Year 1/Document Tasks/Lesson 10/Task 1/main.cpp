#include <iostream>

using namespace std;

int main()
{
  string word;
  int number;

  cout << "Enter word: ";
  cin >> word;

  cout << "Enter number: ";
  cin >> number;

  string newWord = word.substr(0, number);
  cout << newWord;

  return 0;
}
