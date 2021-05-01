#include "Cliente.hpp"

Cliente::Cliente()
{
    RFC="";
}

Cliente::Cliente(string nom, string dir, char sex, int cel, string fechaNac,string rfc)
{
    this->agregarDatos(nom, dir, sex, cel, fechaNac);
    RFC=rfc;
}

void Cliente :: mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "RFC: " << RFC << endl;
}
