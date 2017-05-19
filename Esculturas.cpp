#include "Esculturas.h"
#include <string>

using namespace std;

Esculturas::Esculturas(){

}

Esculturas::Esculturas(string peso, string material,string id, string nombre, string autor, string fecha):Obras(id,nombre,autor,fecha){
 this->peso=peso;
 this->material=material;

}
