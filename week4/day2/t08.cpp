#include <iostream>
#include <string>
#include "t08header.h"

using namespace std;


int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
  Pirate hook("Hook", 0);
  hook.drink_rum();
  hook.drink_rum();
  hook.drink_rum();
  cout << hook.hows_goin_mate();
  hook.drink_rum();
  hook.drink_rum();
  cout << hook.hows_goin_mate();

  return 0;
}
