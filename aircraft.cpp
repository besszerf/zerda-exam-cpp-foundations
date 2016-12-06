#include "aircraft.h"

Aircraft::Aircraft() {
  ammo = 0;
  max_ammo = 8;
  base_damage = 30;
}

Aircraft::~Aircraft() {}


int Aircraft::fight() {
  int damage = base_damage*ammo;
  ammo = 0;
  return damage;
}

int Aircraft::refill(int& ammo_storage) {
  if (ammo_storage > max_ammo) {
    ammo = max_ammo;
    ammo_storage -= max_ammo;
  } else {
    ammo = ammo_storage;
    ammo_storage = 0;
  }
  return ammo_storage;
}

std::string Aircraft::get_status() {
  std::string status = "";
  status += "Type: " + get_type() + ", ";
  status += "Ammo: " + to_string(ammo) + ", ";
  status += "Base damage: " + to_string(base_damage) + ", ";
  status += "All Damage: " + to_string(base_damage * ammo);
  return status;
}

int Aircraft::ammo_needs() {
  return max_ammo - ammo;
}
