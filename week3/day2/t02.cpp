#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int get_surface(RectangularCuboid brick) {
	int surface = brick.a * brick.b * 2 + brick.a * brick.c * 2 + brick.c * brick.b * 2;
	return surface;
}

int get_volume(RectangularCuboid brick) {
	int volume = brick.a * brick.b *brick.c;
	return volume;
}

int main() {
  RectangularCuboid brick = {2, 3, 4};

  cout << get_surface(brick) << endl;
  cout << get_volume(brick);
  return 0;
}
