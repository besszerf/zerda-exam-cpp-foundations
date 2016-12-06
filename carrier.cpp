#include "carrier.h"

Carrier::Carrier(int ammo) {
  ammo_store = ammo;
  health = 1000;
}

void Carrier::add_aircraft(std::string aircraft_type) {
  if (aircraft_type == "F35") {
    aircrafts.push_back(new F35);
  } else {
    aircrafts.push_back(new F16);
  }
}
