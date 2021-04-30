#include "Persona.hpp"

Persona :: Persona()
{
    nombre = "";
    direccion = "";
    sexo = '';
    telefono = 0;
    fechaNacimiento = "";
}

void Persona :: agregarDatos(string nom, string dir, char sex, int cel, string fechaNac)
{
    nombre = nom; direccion = dir; sexo = sex; telefono = cel; fechaNacimiento = fechaNac;
}