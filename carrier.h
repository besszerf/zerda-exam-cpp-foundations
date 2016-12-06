#ifndef CARRIER_H_
#define CARRIER_H_
#include <vector>
#include <string>
#include "aircraft.h"

class Carrier {
  private:
    std::vector<Aircraft*> aircrafts;
    int ammo_store;
    int health;
  public:
    Carrier(int ammo);
    void add_aircraft(std::string aircraft_type);
};

#endif /* CARRIER_H_ */
