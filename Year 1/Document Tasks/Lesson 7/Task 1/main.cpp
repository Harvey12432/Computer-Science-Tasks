#include <iostream>

using namespace std;

void outputAdvise(int f)
{
  switch (f)
  {
  case 0:case 1:case 2:
    cout << "Eat more";
    break;
  case 3:
    cout << "You're fine you do you";
    break;
  case 4:case 5:case 6:
    cout << "Go to gym";
    break;
  case 7:
    cout << "pray to the lord because you need jesus";
    break;
  }
}

int outputCategory(double bmi)
{
  if (bmi > 0 && bmi <= 15)
  {
    return 0;
  }
  else if (bmi > 15 && bmi <= 16)
  {
    return 1;
  }
  else if (bmi > 16 && bmi <= 18.5)
  {
    return 2;
  }
  else if (bmi > 18.5 && bmi <= 25)
  {
    return 3;
  }
  else if (bmi > 25 && bmi <= 30)
  {
    return 4;
  }
  else if (bmi > 30 && bmi <= 35)
  {
    return 5;
  }
  else if (bmi > 35 && bmi <= 40)
  {
    return 6;
  }
  else if (bmi > 40)
  {
    return 7;
  }

  return 0;
}

void outputBMI(double bmi)
{
  cout << "BMI: " << bmi << endl;
}

void displayResults(double bmi)
{
  outputBMI(bmi);
  int f = outputCategory(bmi);
  outputAdvise(f);
}

double calculateBMI(double m, double h)
{
  return m / (h * h);
}

void getHeight(double &h)
{
  cout << "Enter height in meters:";
  cin >> h;
}

void getMass(double &m)
{
  cout << "Enter mass in kilograms:";
  cin >> m;
}

void getInputs(double &m, double &h)
{
  getMass(m);
  getHeight(h);
}

int main()
{
  double mass, height;
  getInputs(mass, height);
  double bmi = calculateBMI(mass, height);
  displayResults(bmi);
  return 0;
}
