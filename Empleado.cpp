#include "Empleado.hpp"

// Constructor Default
Empleado :: Empleado()
{
    Cargo="";
    Sucursal="";
}

// Constructor con parametros
Empleado :: Empleado(string nom, string dir, char sex, int cel, string fechaNac,string car, string suc)
{
    Cargo=car;
    Sucursal=suc;
    this->agregarDatos(nom, dir, sex, cel, fechaNac);
}
void Empleado :: transferir(string sucursalNueva)
{
    Sucursal = sucursalNueva;
}
//setters
void Empleado::setSucursal(string s){
    Sucursal=s;
}
void Empleado::setCargo(string c){
    Cargo=c;
}
//getters
string Empleado::getCargo(){
    return Cargo;
}

void Empleado :: mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "Cargo: " << Cargo << endl;
    cout << "Sucursal: " << Sucursal << endl;
}


