#include "Cliente.hpp"
#include "Sucursal.hpp"
#include "Empleado.hpp"
#include "InventarioProductos.hpp"

#include <iostream>
using namespace std;

int main (){
    
    //crear productos que tendran todas las sucursales
    Producto sopa("sopa",1, 15,15,2,4),manzana("manzana",2, 15,15,2,4),pera("pera",3, 15,15,2,4);
    Producto cloro("cloro",4, 15,15,2,4),suavitel("suavitel",5, 15,15,2,4); 
    // Creando una sucursal
    Sucursal sucursal1;
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.agregar(sopa, 5);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.borrar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(manzana, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);
    // Creando un empleado

    // Creando un cliente
    

    return 0;
}
