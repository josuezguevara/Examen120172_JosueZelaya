#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include <iostream>

using namespace std;
//prototipos de funciones 
int menu();

int main(){



}//fin del main

//funcion menu
int menu(){
 int opcion;
  bool valido=true;
 do{
    cout<<"------------Menu---------" <<endl
    <<"1.- Agregar"<<endl
    <<"2.- Eliminar"<<endl
    <<"3.- Transferir a otro museo"<<endl
    <<"4.- Reportes"<<endl
    <<"5.- Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>opcion;
    if (opcion >0 && opcion <7)
      valido=true;
    else{
     cout<<"Opcion no valida"<<endl;
    }                                                                          
  }while(!valido);
 
 return opcion;
 }//fin de menu
