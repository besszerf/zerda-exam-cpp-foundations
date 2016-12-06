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
  ammo = max_ammo;
  ammo_storage -= max_ammo;
  return ammo_storage;
}

