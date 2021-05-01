//
//  sucursal.hpp
//  
//
//  Created by Ernesto Godinez on 28/04/21.
//

#ifndef sucursal_hpp
#define sucursal_hpp
#include "InventarioProductos.hpp"
#include "Empleado.hpp"
#include <iostream>
using namespace std;
class Sucursal:public InventarioProductos{
    public:
        Sucursal();
        Sucursal( string);
     //los siguientes van a cambiar los empleados de una sucursal
        void agregar(Empleado);
        void modificar(Empleado,string);
        void borrar(Empleado);
    //sobreescritura para productos
        void agregar(Producto,int);
        void borrar(Producto, int); // Valores negativos
        void mostrarCantidadProd(Producto);
        void mostrarSucursal();
    protected:
        string nombre;
        int cantidad;

};

#endif /* sucursal_hpp */
