#include "Empleado.h"

// Constructor Default
Empleado :: Empleado() 
{
    Cargo="";
    Ubicacion="";
}

// Constructor con parametros
Empleado :: Empleado(string car, string ubi) 
{
    Cargo=car;
    Ubicacion=ubi;
}

