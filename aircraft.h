/*
 * aircraft.h
 *
 *  Created on: 2016.12.06.
 *      Author: caruzzo74
 */

#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_

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

#endif /* AIRCRAFT_H_ */
