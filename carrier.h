#ifndef CARRIER_H_
#define CARRIER_H_
#include <vector>
#include <string>
#include "f16.h"
#include "f35.h"

class Carrier {
  private:
    std::vector<Aircraft*> aircrafts;
    int ammo_store;
    int* health;
  public:
    Carrier(int ammo);
    void add_aircraft(std::string aircraft_type);
    void fill();
    int get_ammo_store();
    void fight(Carrier other_carrier);
    int get_health();
    void get_status();
    int total_damage();
};

#endif /* CARRIER_H_ */
