//
//  inventario_productos.hpp
//  invernario_productos
//
//  Created by Ernesto Godinez on 24/04/21.
//

#ifndef inventario_productos_hpp
#define inventario_productos_hpp
#include "Producto.hpp"
#include <iostream>
using namespace std;

class InventarioProductos{
    protected:
        int cantidadExistentes = 0;
        Producto *listaProductos;
    
    public:
        InventarioProductos();
        void setCantidadExistentes(Producto, int);
        int getCantidadExistentes(Producto);
        
};

#endif /* inventario_productos_hpp */
