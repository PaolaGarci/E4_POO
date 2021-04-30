
#ifndef EMPLEADO_HPP_INCLUDED
#define EMPLEADO_HPP_INCLUDED
#include "Persona.hpp"

using namespace std;

class Empleado:public Persona{
private:
    string Cargo;
    string Ubicacion;
  
public:
    Cargo();
    Cargo( string car, string ubi);
    void generarOrden();
   
};
#endif // EMPLEADO_H_INCLUDED
