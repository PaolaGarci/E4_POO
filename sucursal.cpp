//
//  sucursal.cpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#include "Sucursal.hpp"

Sucursal :: Sucursal (){
    nombre=" Vallarta";
    
}
Sucursal :: Sucursal (string nom){
    //Producto P1,P2,P3,P4,P5; //Crea productos default para la lista, esta tendrá q ser diferente al decidir q productos queremos
    //Producto listaP[5]={P1,P2,P3,P4,P5};
    nombre=nom; 
}
//metodos q a/m/b productos en la lista
void Sucursal::agregar(Empleado e){ //se agrega la sucursal de un empleado
    e.setSucursal(nombre);
}
void Sucursal::modificar(Empleado e,string carg){ //cargos
    e.setCargo(carg);
}
void Sucursal::borrar(Empleado e){
    e.setSucursal(" ");
}
//metodos sobrecarga (funciones) de productos, agrega cantidad de producto a una sucursal
void Sucursal :: agregar(Producto prod,int cant){
    this->setCantidadExistentes(prod, cant);
}

void Sucursal :: mostrarCantidadProd(Producto prod)
{
    cout << "Existen: " << this->getCantidadExistentes(prod) << " articulos del tipo: " << this->getNombre(prod) << endl;
}

void Sucursal :: borrar(Producto prod, int cant)
{
    this->setCantidadExistentes(prod, -cant);
}
