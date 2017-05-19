#include "Disenos.h"
#include <string>

using namespace std;

Disenos::Disenos(){

}

Disenos::Disenos(string terreno, string id, string nombre, string autor, string fecha):Obras(id,nombre,autor,fecha){
 this->terreno=terreno;
}
