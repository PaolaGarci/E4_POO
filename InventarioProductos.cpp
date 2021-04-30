//
//  inventario_productos.cpp
//  invernario_productos
//
//  Created by Ernesto Godinez on 24/04/21.
//

#include "InventarioProductos.hpp"
//CONSTRUCTORES
InventarioProductos::InventarioProductos(){
    cantidadExistentes=10;
}
InventarioProductos(int cant){
    cantidadExistentes=cant;
}
void InventarioProductos::setCantidadExistentes(int cant){
    cantidadExistentes=cant;
}
