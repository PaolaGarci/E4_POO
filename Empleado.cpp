#include "Empleado.hpp"



// Constructor Default
Empleado :: Empleado():Persona()
{
    Cargo="";
    Sucursal="";
}

// Constructor con parametros
Empleado :: Empleado(string nom, string dir, char sex, int cel, string fechaNac,string car, string suc):Persona(nom,dir,sex, cel,fechaNac)
{
    Cargo=car;
    Sucursal=suc;
}
void Empleado :: transferir(){
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
<<<<<<< HEAD

void Empleado :: generarOrden()
{

}

=======
>>>>>>> 34ed70d320f2859d8bed433b9ce32fe3a95773b4
