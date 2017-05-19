#include "Obras.h"
#include <string>

#ifndef PINTURAS_H
#define PINTURAS_H

using namespace std;

class Pinturas: public Obras{
 public:
  string material;
  string tecnica;

  Pinturas();
  Pinturas(string, string, string, string, string, string);




};
#endif
