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
Producto::Producto(string nom,int codP,float pCompra,float s,float p){
    nombreProd = nom;
    codigoProducto=codP;
    //16% de iva y 20% de ganancia
    precioVenta=pCompra*1.36;
    precioCompra=pCompra;
    size=s;
    peso=p;
    
}
void Producto::mostrarProducto(){
    cout << "Nombre del producto: " << nombreProd << endl;
    cout << "Codigo de producto: " << codigoProducto << endl;
    cout << "Precio de venta: " << precioVenta << endl;
    cout << "Precio de compra: "  << precioCompra << endl;
    cout << "Dimensiones: " << size << endl;
    cout << "Peso: " << peso << endl;
}

int Producto :: getCantExt()
{
    return cantidadExistente;
}

void Producto :: setCantExt(int cant)
{
    cantidadExistente = cant;
}

string Producto :: getNombre()
{
    return nombreProd;
}

float Producto :: getPrecioVenta()
{
    return precioVenta;
}

float Producto :: getPrecioCompra()
{
    return precioCompra;
}

float Producto :: getSize()
{
    return size;
}

float Producto :: getPeso()
{
    return peso;
}
