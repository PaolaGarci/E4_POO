//
//  sucursal.cpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#include "Sucursal.hpp"
Sucursal::Sucursal(){
    Producto P1,P2,P3,P4,P5 ; //Crea productos default para la lista, esta tendrá q ser diferente al decidir q productos queremos
    Producto listaP[5]={P1,P2,P3,P4,P5};
    listaProductos=listaP;
    nombre=" ";
    string listaSucursales[10]={"GDL","MONT","CDMX","QRO","AGS","SANP","VALLARTA","CANCUN","HIDALGO","PUEBLA"};
}
Sucursal::Sucursal(string nom){
    Producto P1,P2,P3,P4,P5; //Crea productos default para la lista, esta tendrá q ser diferente al decidir q productos queremos
    Producto listaP[5]={P1,P2,P3,P4,P5};
    listaProductos=listaP;
    nombre=nom;
    
}
//metodos q a/m/b productos en la lista
void Sucursal::agregar(Producto p){
    
}
void Sucursal::modificar(Producto p){
    
}
void Sucursal::borrar(){
    
}
void Sucursal::imprimirSucursales(){
    for (int i=0; i<10; i++){
        cout << listaSucursales[i] <<endl;
    }
}
