#include <iostream>
#include <string>

using namespace std;

class Circle {
  private:
    float radius;
  public:
    Circle(float radius) {
      this->radius = radius;
    }

    float get_circumference()  {
      return this->radius * 2 * 3.14;
    }

    float get_area() {
    	return this->radius * radius * 3.14;
    }
};

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
  Circle circle(1);
  cout << circle.get_circumference() << endl;
  cout << circle.get_area() << endl;
  return 0;
}
