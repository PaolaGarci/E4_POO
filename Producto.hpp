#include <iostream>
using namespace std;

class Producto{
    private:
        string nombreProd;
        int codigoProducto;
        float precioVenta;
        float precioCompra;
        float size;
        float peso;
        int cantidadExistente = 0;

    public:
        Producto();
        Producto(string,int,float,float,float);
        void mostrarProducto();
        int getCantExt();
        void setCantExt(int);
        string getNombre();
        float getPrecioVenta();
        float getPrecioCompra();
        float getSize();
        float getPeso();
};
