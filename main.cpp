#include <iostream>
#include <vector>
#include "aircraft.h"
using namespace std;


int main() {

Aircraft aircraft;
int ammo_storage = 1000;
cout << aircraft.refill(ammo_storage) << endl;;
cout << aircraft.fight() << endl;
  return 0;
}
