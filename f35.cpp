#include "f35.h"

F35::F35() {
  Aircraft::max_ammo = 12;
  Aircraft::base_damage = 50;
}

std::string F35::get_type() {
  return type;
}
