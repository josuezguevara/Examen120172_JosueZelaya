#include "Pintura.h"
#include <string>

using namespace std;

Pinturas::Pinturas(){

}

Pinturas::Pinturas(string material, string tecnica, string id, string nombre, string autor, string fecha):Obras(id,nombre,autor,fecha){
 this->material=material;
 this->tecnica=tecnica;

}
