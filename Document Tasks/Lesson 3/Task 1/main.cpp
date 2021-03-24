#include <iostream>

using namespace std;

int main()
{
  // Declaring variables
  string name;
  int age, height;

  // Getting input from user
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter height: ";
  cin >> height;

  // Displaying variables
  cout << "Hello " << name << ", you are " << age << " years old and " << height << " cm tall";

  return 0;
}