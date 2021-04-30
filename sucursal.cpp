//
//  sucursal.cpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#include "Sucursal.hpp"
Sucursal::Sucursal(){
    //Producto P1,P2,P3,P4,P5 ; //Crea productos default para la lista, esta tendrá q ser diferente al decidir q productos queremos
    Producto listaP[5]={P1,P2,P3,P4,P5};
    listaProductos=listaP;
    nombre=" ";
    
}
Sucursal::Sucursal(string nom){
   // Producto P1,P2,P3,P4,P5; //Crea productos default para la lista, esta tendrá q ser diferente al decidir q productos queremos
    Producto listaP[5]={P1,P2,P3,P4,P5};
    listaProductos=listaP;
    nombre=nom;
    
}
//metodos q a/m/b productos en la lista
void Sucursal::agregar(Empleado e){ //se agrega la sucursal de un empleado
    e.setSucursal(nombre);
}
void Sucursal::modificar(Empleado e){ //cargos
    e.setCargo();
    
}
void Sucursal::borrar(Empleado){
    Empleado vacio();
    arr[i]=vacio;
}
void Sucursal::imprimirSucursales(){
    for (int i=0; i<10; i++){
        cout << listaSucursales[i] <<endl;
    }
}
//metodos sobreescritura (funciones) de productos
void agregar(Producto){
    
}
void modificar(Producto){
    
}
void borrar(Producto){
    
}
