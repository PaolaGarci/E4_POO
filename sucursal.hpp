//
//  sucursal.hpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#ifndef sucursal_hpp
#define sucursal_hpp
#include <stdio.h>
#include "Producto.hpp"
#include <iostream>
using namespace std;
class Sucursal{
    public:
        Sucursal();
        Sucursal(string);
     //los siguientes van a cambiar los empleados de una sucursal
        void agregar(Empleado);
        void modificar(Empleado);
        void borrar(Empleado);
    //sobreescritura para productos
        void agregar(Producto);
        void modificar(Producto);
        void borrar(Producto);
    protected:
        string nombre;
        Producto listaProductos[5];
        Empleado listaEmpleados[3];
};

#endif /* sucursal_hpp */
