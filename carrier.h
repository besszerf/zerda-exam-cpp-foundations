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
};

#endif /* CARRIER_H_ */
