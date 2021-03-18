#include <iostream>

using namespace std;

int globArray[8];

void printMenu()
{
  cout << "+------------------------------+\n";
  cout << "|       Array Functions        |\n";
  cout << "+------------------------------+\n";
  cout << "| [1] Make new array           |\n";
  cout << "| [2] Edit Element             |\n";
  cout << "| [3] Print Array              |\n";
  cout << "| [4] Print Average            |\n";
  cout << "| [5] Search Num               |\n";
  cout << "| [6] Exit                     |\n";
  cout << "+------------------------------+\n";
}

void createArray()
{
  cout << "Enter 8 new numbers:";
  for (int i = 0; i < 8; i++)
  {
    cin >> globArray[i];
  }
  cout << "Array Created!";
}

void editElement()
{
  int index, oldValue, newValue;
  cout << "Enter index you would like to change!:";
  cin >> index;
  cout << "Enter new value:";
  cin >> newValue;

  oldValue = globArray[index];
  globArray[index] = newValue;

  cout << "Changed the value of index " << index << " from " << oldValue << " to " << newValue;
}

void printArray()
{
  cout << "Array Contents:" << endl;
  for (int i : globArray)
  {
    cout << i << " ";
  }
}

void printAverage()
{
  int total = 0;
  for (int i : globArray)
  {
    total += i;
  }
  cout << "The average of the array is " << (double)total / 8;
}

void searchNum()
{
  bool found;
  int num;

  cout << "Enter a number you would like to find:";
  cin >> num;

  for (int i = 0; i < 8; i++)
  {
    if (globArray[i] == num)
    {
      cout << "Number Found!" << endl;
      cout << "Position in array:" << i;
      found = true;
    }
  }
  if (!found)
  {
    cout << "Number could not be found in array!";
  }
}

void controller(int operation)
{
  switch (operation)
  {
  case 1:
    createArray();
    break;
  case 2:
    editElement();
    break;
  case 3:
    printArray();
    break;
  case 4:
    printAverage();
    break;
  case 5:
    searchNum();
    break;
  }
}

int main()
{
  int operation;

  createArray();
  do
  {
    cout << endl;
    printMenu();
    cout << endl
         << "Enter operation number:";
    cin >> operation;
    controller(operation);
  } while (operation != 6);

  return 0;
}