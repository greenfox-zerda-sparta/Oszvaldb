#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }

    string change_name(string n) {
      return this->name = n;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property
  Student j("Jon", 21);
  cout << j.greet() << endl;
  j.change_name ("John");
  cout << j.greet();
  return 0;
}
