#include <iostream>
#include <vector>
#include "f16.h"
#include "f35.h"
#include "carrier.h"
using namespace std;


int main() {

/*  F16 aircraft;
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
*/
  Carrier carrier(50);
  carrier.add_aircraft("F35");
  carrier.add_aircraft("F16");
  carrier.add_aircraft("F35");
  carrier.add_aircraft("F35");
  carrier.add_aircraft("F16");
  carrier.add_aircraft("F16");
try {
  carrier.fill();
} catch (int x) {
  cout << x << endl;
}

  Carrier c2(50);
  c2.add_aircraft("F35");
  c2.add_aircraft("F16");
  try {
    c2.fill();
  } catch (int x) {}
  carrier.fight(c2);
  c2.get_status();
  return 0;
}
