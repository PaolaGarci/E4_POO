#include "Producto.hpp"
#include <iostream>
//Constructores
Producto::Producto(){
    codigoProducto=0;
    precioVenta=0;
    precioCompra=0;
    size=0;
    peso=0;
}
Producto::Producto(string nom,int codP,float pVenta,float pCompra,float s,float p){
    nombreProd = nom;
    codigoProducto=codP;
    precioVenta=pVenta;
    precioCompra=pCompra;
    size=s;
    peso=p;
    
}
void Producto::mostrarProducto(){
    cout<<codigoProducto<<endl;
    cout<<precioVenta<<endl;
    cout<<precioCompra<<endl;
    cout<<size<<endl;
    cout<<peso<<endl;
    
}

int Producto :: getCantExt()
{
    return cantidadExistente;
}

void Producto :: setCantExt(int cant)
{
    cantidadExistente = cant;
}