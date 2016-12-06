#include "carrier.h"
#include <iostream>

Carrier::Carrier(int ammo) {
  ammo_store = ammo;
  health = new int(1000);
}

void Carrier::add_aircraft(std::string aircraft_type) {
  if (aircraft_type == "F35") {
    aircrafts.push_back(new F35);
  } else {
    aircrafts.push_back(new F16);
  }
}

void Carrier::fill() {
  int needed_ammo;
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    needed_ammo += aircrafts[i]->ammo_needs();
  }
  if (needed_ammo < ammo_store) {
    for (unsigned i = 0; i < aircrafts.size(); i++) {
      ammo_store = aircrafts[i]->refill(ammo_store);
    }
  } else {
    for (unsigned i = 0; i < aircrafts.size(); i++) {
      if (aircrafts[i]->get_type() == "F16") {
        needed_ammo += aircrafts[i]->ammo_needs();
        if (ammo_store > 0) {
          ammo_store = aircrafts[i]->refill(ammo_store);
        }
      }
    }
    for (unsigned i = 0; i < aircrafts.size(); i++) {
      if (ammo_store > 0) {
        ammo_store = aircrafts[i]->refill(ammo_store);
      }
    }
  }
}

int Carrier::get_ammo_store() {
  return ammo_store;
}

void Carrier::fight(Carrier other_carrier) {
  int total_damage = 0;
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    total_damage += aircrafts[i]->fight();
  }
  if (total_damage > *other_carrier.health) {
    *other_carrier.health = 0;
  } else {
    *other_carrier.health -= total_damage;
  }
}
int Carrier::get_health() {
  return *health;
}

int Carrier::total_damage() {
  int total_damage = 0;
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    total_damage += aircrafts[i]->get_total_damage();
  }
  return total_damage;
}
void Carrier::get_status() {
  if (*health != 0) {
    std::cout << "Aircraft count: " + to_string(aircrafts.size()) + ", ";
    std::cout <<  "Ammo storage: " + to_string(ammo_store) + ", ";
    std::cout <<  "Total Damage: " + to_string(total_damage()) + "\n";
    std::cout <<  "Aircrafts: \n";
    for (uint i = 0; i < aircrafts.size(); i++) {
      std::cout <<  aircrafts[i]->get_status() << std::endl;
    }
  } else {
    std::cout << "It's dead Jim :(" << std::endl;
  }
}
