#include <iostream>

using namespace std;

int main()
{
  // Declaring variables
  double englishMarks, mathMarks, compSciMarks, totalMarks, percentage;
  char grade;

  // Getting input from user
  cout << "Enter English, Math and Computer Science marks: ";
  cin >> englishMarks >> mathMarks >> compSciMarks;

  // Calculating percentage
  totalMarks = englishMarks + mathMarks + compSciMarks;
  percentage = (totalMarks / 20) * 100;

  // Displaying percentage
  cout << percentage << "%" << endl;

  // Figuring out what grade they got
  if (percentage >= 90)
  {
    grade = 'A';
  }
  else if (percentage >= 80)
  {
    grade = 'B';
  }
  else if (percentage >= 70)
  {
    grade = 'C';
  }
  else if (percentage >= 60)
  {
    grade = 'E';
  }
  else
  {
    grade = 'F';
  }

  // Displaying what grade they got
  cout << "You have scored Grade " << grade;

  return 0;
}
