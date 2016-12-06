#include "util.h"

std::string to_string(int integer) {
  std::stringstream x;
  x << integer;
  return x.str();
}
