#include <iostream>
#include <vector>
#include "f16.h"
using namespace std;


int main() {

f16 aircraft;
int ammo_storage = 1000;
cout << aircraft.refill(ammo_storage) << endl;;
cout << aircraft.fight() << endl;
  return 0;
}
