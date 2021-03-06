
#ifndef EMPLEADO_HPP_INCLUDED
#define EMPLEADO_HPP_INCLUDED
#include "Persona.hpp"
#include "Cliente.hpp"
#include "InventarioProductos.hpp"
#include <iostream>
using namespace std;

class Empleado:public Persona{
private:
    string Cargo;
    string Sucursal;
  
public:
    Empleado();
    Empleado( string car, string ubi);
    Empleado( string nom, string dir, char sex, int cel, string fechaNac, string car, string ubi);
    void mostrarPersona();
    void transferir(string);
    void generarOrden(Cliente, InventarioProductos, string);
    //setters
    void setSucursal(string);
    void setCargo(string);
    //getters
    string getSucursal();
    string getCargo();
   
};
#endif // EMPLEADO_H_INCLUDED
