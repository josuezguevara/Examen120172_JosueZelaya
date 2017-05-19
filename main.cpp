#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Pintura.h"
#include "Disenos.h"

#include <vector>
#include <iostream>

using namespace std;
//prototipos de funciones 
int menu();

int main(){
 vector<Obras> obras;
 vector<Obras> transferidos;
 bool salir=false;

 while(!salir){
  switch ( menu() ){
   case 1:{
    string id,nombre,autor,fecha;
    int op;
    cout<<"Ingrese Nombre: "<<endl;
    getline(cin,nombre);
    getline(cin,nombre);
    cout<<"Ingrese autor: "<<endl;
    getline(cin,autor);
    cout<<"Ingrese fecha: "<<endl;
    getline(cin,fecha);
    cout<<"Ingrese el numero de museo "<<endl
    <<"1. Literatura"<<endl
    <<"2. Escultura"<<endl
    <<"3. Pinturas"<<endl
    <<"4. Diseños Arquetectónicos"<<endl;
    cout<<"Ingrese opcion: "<<endl;
    cin>>op;
    switch (op){
     case 1:{
      string genero,epoca;
      cout<<"Ingrese un genero literario: "<<endl;
      cin>>genero;
      cout<<"Ingrese epoca: "<<endl;
      cin>>epoca;
      Literatura literatura(genero,epoca,id,nombre,autor,fecha);
      obras.push_back(literatura);   
      break;
     }
     case 2:{
       string peso, material;
       cout<<"Ingrese peso: "<<endl;
       cin>>peso;
       cout<<"Ingrese material con que fue hecho: "<<endl;
       cin>>material;
       Esculturas escultura(peso,material,id,nombre,autor,fecha);
       obras.push_back(escultura);
       break;
     }

    }//fin switch
    break;
   }
   case 2:{


    break;
   }
   case 3:{
   
    break;
   }
   case 4:{
   
    break;
   }
   case 5:{
    cout<<"Ha salido del programa! :)"<<endl;
    salir=true;
    break;
   }
  }
 }
return 0;



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
