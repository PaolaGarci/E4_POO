

#include <iostream>
using namespace std;

class Producto{
    public:
        string nombreProd;
        int codigoProducto;
        float precioVenta;
        float precioCompra;
        float size;
        float peso;
        int cantidadExistente;

        Producto();
        Producto(string,int,float,float,float,float);
        void mostrarProducto();
        void agregar();
        void modificar();
        void borrar();
        int getCantExt();
        void setCantExt(int);
};




