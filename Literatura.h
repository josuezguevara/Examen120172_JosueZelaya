#include "Obras.h"
#include <string>

#ifndef LITERATURA_H
#define LITERATURA_H

using namespace std;

class Literatura: public Obras{
 public:
 
  string genero;
  string epoca;

  Literatura();
  Literatura(string,string,string,string,string,string);


};

#endif
