#ifndef F35_H_
#define F35_H_
#include <string>
#include "aircraft.h"

class F35 : public Aircraft {
  private:
    std::string type = "F35";
  public:
    F35();
    std::string get_type();
};

#endif /* F35_H_ */
