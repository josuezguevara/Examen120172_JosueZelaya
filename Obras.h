#ifndef OBRAS_H
#define OBRAS_H
#include <string>

using namespace std;

class Obras{
 
  public:
   string id;
   string nombre;
   string autor;
   string fecha;
   
   Obras();
   Obras(string,string,string,string);

   string getName();
   void setName(string);
};

#endif
