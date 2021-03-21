#include <iostream>

using namespace std;

void printEm(string words[])
{
  for (int i = 0; i < 3; i++)
  {
    cout << words[i] << " ";
  }
}

void uppercaseEm(string words[])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < words[i].size(); j++)
    {
      words[i][j] = toupper(words[i][j]);
    }
  }
}

void lowercaseEm(string words[])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < words[i].size(); j++)
    {
      words[i][j] = tolower(words[i][j]);
    }
  }
}

int main()
{
  string words[3];

  cout << "Enter 3 words: ";
  for (int i = 0; i < 3; i++)
  {
    cin >> words[i];
  }

  cout << "Original: ";
  printEm(words);

  cout << endl;

  uppercaseEm(words);

  cout << "Uppercased: ";
  printEm(words);

  lowercaseEm(words);

  cout << endl;

  cout << "Lowercased: ";
  printEm(words);

  return 0;
}
