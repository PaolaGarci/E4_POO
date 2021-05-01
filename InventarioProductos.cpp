//
//  inventario_productos.cpp
//  invernario_productos
//
//  Created by Ernesto Godinez on 24/04/21.
//

#include "InventarioProductos.hpp"
//CONSTRUCTORES
InventarioProductos::InventarioProductos()
{
    Producto sopa("sopa",1, 15,15,2,4),manzana("manzana",2, 15,15,2,4),pera("pera",3, 15,15,2,4);
    Producto cloro("cloro",4, 15,15,2,4),suavitel("suavitel",5, 15,15,2,4); 
    listaProductos = new Producto[5] {sopa,manzana,pera,cloro,suavitel};
   
}

void InventarioProductos::setCantidadExistentes(Producto prod,int cant){
    for (int numero = 0; numero < 5; numero ++)
    {
        if(prod.nombreProd == listaProductos[numero].nombreProd)
        {
            listaProductos[numero].cantidadExistente = listaProductos[numero].cantidadExistente + cant;
            break;
        }
    }
}

int InventarioProductos::getCantidadExistentes(Producto prod)
{
    for (int numero = 0; numero < 5; numero ++)
    {
        if(prod.nombreProd == listaProductos[numero].nombreProd)
        {
            return listaProductos[numero].cantidadExistente;
        }
    }
    return 0;
}

