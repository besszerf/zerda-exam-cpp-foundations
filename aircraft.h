/*
 * aircraft.h
 *
 *  Created on: 2016.12.06.
 *      Author: caruzzo74
 */

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
  private:
    int ammo;
    int max_ammo;
    int base_damage;
};

#endif /* AIRCRAFT_H_ */
