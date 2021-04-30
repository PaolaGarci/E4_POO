#include "Persona.hpp"

Persona :: Persona()
{
    nombre = "";
    direccion = "";
    sexo = '';
    telefono = 0;
    fechaNacimiento = "";
}

void Persona :: mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
}

void Persona :: agregarDatos(string nom, string dir, char sex, int cel, string fechaNac)
{
    nombre = nom; direccion = dir; sexo = sex; telefono = cel; fechaNacimiento = fechaNac;
}