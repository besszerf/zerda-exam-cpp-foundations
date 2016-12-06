#include <iostream>
#include <vector>
#include "f16.h"
#include "f35.h"
using namespace std;


int main() {

  F16 aircraft;
  int ammo_storage = 1000;
  cout << aircraft.refill(ammo_storage) << endl;;
  cout << aircraft.get_status() << endl;
  cout << aircraft.fight() << endl;
  cout << aircraft.get_status() << endl;

  cout << endl;
  F35 a2;
  cout << a2.refill(ammo_storage) << endl;;
  cout << a2.get_status() << endl;
  cout << a2.fight() << endl;
  cout << a2.get_status() << endl;

  return 0;
}
