#include <iostream>
#include <vector>
using namespace std;

class Aircraft {
  public:
    Aircraft();
    int refill(int& ammo_storage);
    int fight();
  private:
    int ammo;
    int max_ammo;
    int base_damage;
};

Aircraft::Aircraft() {
  ammo = 0;
  max_ammo = 8;
  base_damage = 30;
}

int Aircraft::fight() {
  int damage = base_damage*ammo;
  ammo = 0;
  return damage;
}

int Aircraft::refill(int& ammo_storage) {
  ammo = max_ammo;
  ammo_storage -= max_ammo;
  return ammo_storage;
}

int main() {

Aircraft aircraft;
int ammo_storage = 1000;
cout << aircraft.refill(ammo_storage) << endl;;
cout << aircraft.fight() << endl;
  return 0;
}
