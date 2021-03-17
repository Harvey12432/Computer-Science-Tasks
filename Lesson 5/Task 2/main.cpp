#include <iostream>

using namespace std;

int main()
{
  // Decalring variables
  int year, month, days;

  // Getting input from user
  cout << "Enter a year: ";
  cin >> year;
  cout << "Enter a month [1-12]: ";
  cin >> month;

  // Checking what month it is and assigning how many days are in that month
  if (month == 2)
  {
    if (year % 4 == 0)
    {
      days = 29;
    }
    else
    {
      days = 28;
    }
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    days = 30;
  }
  else
  {
    days = 31;
  }

  // Displaying the month and how many days it has
  cout << "Month " << month << " has " << days << " days";

  return 0;
}