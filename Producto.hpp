
#include "InventarioProductos.hpp"
using namespace std;
#include <iostream>

class Producto{
private:
    int codigoProducto;
    float precioVenta;
    float precioCompra;
    float size;
    float peso;
public:
    Producto();
    Producto();
    void mostrarProducto();
    void agregar();
    void modificar();
    void borrar();
};




