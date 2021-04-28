
#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "Persona.h"

using namespace std;

class Empleado:public Persona{
private:
    string Cargo;
    string Ubicacion;
  
public:
    Cargo();
    Cargo( string car, string ubi);
   
};
#endif // EMPLEADO_H_INCLUDED
