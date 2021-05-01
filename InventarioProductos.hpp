//
//  inventario_productos.hpp
//  invernario_productos
//
//  Created by Ernesto Godinez on 24/04/21.
//

#ifndef inventarioproductos_hpp
#define inventarioproductos_hpp
#include "Producto.hpp"
#include <iostream>
using namespace std;

class InventarioProductos{
    protected:
        int cantidadExistentes = 0;
    
    public:
        Producto *listaProductos;
        InventarioProductos();
        void setCantidadExistentes(Producto, int);
        int getCantidadExistentes(Producto);
        string getNombre(Producto);
        void mostrarInventario();
};

#endif /* inventario_productos_hpp */
