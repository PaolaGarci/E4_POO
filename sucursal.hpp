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
        void agregar(Producto);//tiene q haber productos adentro de los metodos segun yo
        void modificar(Producto);
        void borrar();
    protected:
        string nombre;
        Producto listaProductos[5];
        string listaSucursales[10];

};

#endif /* sucursal_hpp */
