#include "Empleado.hpp"

# JADLKSFJADLSKFJ KLÑS

// Constructor Default
Empleado :: Empleado():Persona()
{
    Cargo="";
    Ubicacion="";
}

// Constructor con parametros
Empleado :: Empleado(string nom, string dir, char sex, int cel, string fechaNac,string car, string ubi):Persona(nom,dir,sex, cel,fechaNac)
{
    Cargo=car;
    Ubicacion=ubi;
}
void Empleado :: transferir(){
}
