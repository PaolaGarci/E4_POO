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
Producto::Producto(int codP,float pVenta,float pCompra,float s,float p){
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
