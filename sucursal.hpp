//
//  sucursal.hpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#ifndef sucursal_hpp
#define sucursal_hpp
#include <stdio.h>
#include "InventarioProductos.hpp"
#include "Empleado.hpp"
#include <iostream>
using namespace std;
class Sucursal:public InventarioProductos{
    public:
        Sucursal();
        Sucursal(Producto*, string);
     //los siguientes van a cambiar los empleados de una sucursal
        void agregar(Empleado);
        void modificar(Empleado,string);
        void borrar(Empleado);
    //sobreescritura para productos
        void agregar(Producto,int);
        void modificar(Producto);
        void borrar(Producto, int); // Valores negativos
        void mostrarCantidadProd(Producto);
    protected:
        string nombre;
        int cantidad;
        Empleado listaEmpleados[3];
};

#endif /* sucursal_hpp */
