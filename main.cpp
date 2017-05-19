#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Pintura.h"
#include "Disenos.h"

#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;
//prototipos de funciones 
int menu();
string Setid();

int main(){
 vector<Obras> obras;
 vector<Obras> transferidos;
 bool salir=false;

 while(!salir){
  switch ( menu() ){
   case 1:{//agregar
    string id,nombre,autor,fecha;
    int op;
    cout<<"Ingrese Nombre: "<<endl;
    getline(cin,nombre);
    getline(cin,nombre);
    cout<<"Ingrese autor: "<<endl;
    getline(cin,autor);
    cout<<"Ingrese fecha: "<<endl;
    getline(cin,fecha);
    id=Setid();
    for(int x=0;x<obras.size();x++){
     if (id==obras[x].getId()){
       id=Setid();
     }
    }
    
    cout<<"----Ingrese el numero de museo que quiere agregar--- "<<endl
    <<"1. Literatura"<<endl
    <<"2. Escultura"<<endl
    <<"3. Pinturas"<<endl
    <<"4. Diseños Arquetectónicos"<<endl;
    cout<<"Ingrese opcion: "<<endl;
    cin>>op;
    switch (op){
     case 1:{//literatura
      string genero,epoca;
      cout<<"Ingrese un genero literario: "<<endl;
      cin>>genero;
      cout<<"Ingrese epoca: "<<endl;
      cin>>epoca;
      Literatura literatura(genero,epoca,id,nombre,autor,fecha);
      obras.push_back(literatura);   
      break;
     }
     case 2:{//escultura
       string peso, material;
       cout<<"Ingrese peso: "<<endl;
       cin>>peso;
       cout<<"Ingrese material con que fue hecho: "<<endl;
       cin>>material;
       Esculturas escultura(peso,material,id,nombre,autor,fecha);
       obras.push_back(escultura);
       break;
     }
     case 3:{//pinturas
      string material,tecnica;
      cout<<"Ingrese el material del lienzo: "<<endl;
      cin>>material;
      cout<<"Ingrese la tecnica que se utilizo: "<<endl;
      cin>>tecnica;
      Pinturas pintura(material,tecnica, id,nombre,autor,fecha);
      obras.push_back(pintura);
      break;
     }
     case 4:{//diseños arquitectonicos
      string terreno;
      cout<<"Ingrese el tipo de terreno en donde esta diseñada: "<<endl;
      cin>>terreno;
      Disenos diseno(terreno, id, nombre,autor,fecha);
      obras.push_back(diseno);
      break;
     }
    }//fin switch
    break;
   }
   case 2:{//eliminar
    cout<<"Ingrese posicion de obra que quiere eliminar: "<<endl;
    for (int i=0;i<obras.size();i++){
     cout<<i<<" -> "<<obras[i].getName()<<endl;
    }
    int b;
    cin>>b;
    obras.erase(obras.begin()+b);
    cout<<"Obra seleccionada  ya ha sido eliminada"<<endl;
    break;
   }
   case 3:{//transferir
    cout<<"Ingresar posicion de obra que quiere transferir: "<<endl;
    for (int i=0;i<obras.size();i++){
     cout<<i<<" -> "<<obras[i].getName()<<endl;
    }
    int trans;
    cin>>trans;
    transferidos.push_back(obras[trans]);
    obras.erase(obras.begin()+trans);
    cout<<"La Obra seleccionada ya ha sido transferida"<<endl;
    break;
   }
   case 4:{//reportes
    cout<<"---Obras de artes existentes en el Museo---: "<<endl;
    for(int i=0;i<obras.size();i++){
     cout<<i<<" -> "<<obras[i].getName()<<" Id:  "<<obras[i].getId()<<" Autor: "<<obras[i].getAutor()<<" Fecha: "<<obras[i].getFecha()<<endl;
    }
    cout<<"---Obras de artes transferidas---: "<<endl;
    for (int j=0;j<transferidos.size();j++){
     cout<<j<<" -> "<<transferidos[j].getName()<<" Id: "<<transferidos[j].getId()<<" Autor: "<<transferidos[j].getAutor()<< " Fecha: "<<transferidos[j].getFecha()<<endl;
    }
         
    break;
   }
   case 5:{//busqueda
    string busqueda;
    cout<<"Ingrese el nombre del Autor: "<<endl;
    cin>>busqueda;
    cout<<"Obras del Autor: "<<endl;
    for(int i=0;i<obras.size();i++){
     if (busqueda==obras[i].getAutor()){
      cout<<i<<" -> " <<obras[i].getName()<<endl;
     }
    }
    break;
   }
   case 6:{///salir
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
    <<"5.- Busqueda"<<endl
    <<"6.- Salir"<<endl;
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

string Setid(){//funcion para crear id
  string numero="";
  vector<string> digitos;
  digitos.push_back("0");
  digitos.push_back("1");
  digitos.push_back("2");
  digitos.push_back("3");
  digitos.push_back("4");
  digitos.push_back("5");
  digitos.push_back("6");
  digitos.push_back("7");
  digitos.push_back("8");
  digitos.push_back("9");
  digitos.push_back("A");
  digitos.push_back("B");
  digitos.push_back("C");
  digitos.push_back("D");
  digitos.push_back("E");
  digitos.push_back("F");

  int num;
  for (int i=0;i <6;i++){
   num=rand()%15;
   numero+=digitos[num];
  }
 return numero;

}//fin de id
