#include "Obras.h"
#include <string>

using namespace std;

Obras::Obras(){

}

Obras::Obras(string id, string nombre, string autor, string fecha){
 this->id=id;
 this->nombre=nombre;
 this->autor=autor;
 this->fecha=fecha;
}

string Obras::getName(){
 return nombre;
}

string Obras::getId(){
 return id;
}

string Obras::getAutor(){
 return autor;
}

string Obras::getFecha(){
 return fecha;
}

void Obras::setName(string pnombre){
 nombre=pnombre;
}
