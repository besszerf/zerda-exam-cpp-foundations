#include <iostream>
#include <vector>
#include "f16.h"
using namespace std;


int main() {

F16 aircraft;
  int ammo_storage = 1000;
  cout << aircraft.refill(ammo_storage) << endl;;
  cout << aircraft.get_status() << endl;
  cout << aircraft.fight() << endl;
  cout << aircraft.get_status() << endl;
  return 0;
}
