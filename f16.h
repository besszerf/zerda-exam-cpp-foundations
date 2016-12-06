#ifndef F16_H_
#define F16_H_
#include <string>
#include "aircraft.h"

class f16 : public Aircraft {
  private:
    std::string type = "F16";
  public:
    std::string get_type();
};



#endif /* F16_H_ */
