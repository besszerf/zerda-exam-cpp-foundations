#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_
#include <string>
#include "util.h"

class Aircraft {
  public:
    Aircraft();
    virtual ~Aircraft();
    int refill(int& ammo_storage);
    int fight();
    virtual std::string get_type() = 0;
    std::string get_status();
    int ammo_needs();
  protected:
    int max_ammo;
    int base_damage;
  private:
    int ammo;
};

#endif /* AIRCRAFT_H_ */
