
#ifndef EMPLEADO_HPP_INCLUDED
#define EMPLEADO_HPP_INCLUDED
#include "Persona.hpp"

using namespace std;

class Empleado:public Persona{
private:
    string Cargo;
    string Sucursal;
  
public:
    Cargo();
<<<<<<< HEAD
    Cargo( string car, string ubi);
    void generarOrden();
=======
    Cargo( string nom, string dir, char sex, int cel, string fechaNac, string car, string ubi);
    void transferir();
    //setters
    void setSucursal(string);
    void setCargo(string);
    //getters
    string getSucursal();
    string getCargo();
>>>>>>> 34ed70d320f2859d8bed433b9ce32fe3a95773b4
   
};
#endif // EMPLEADO_H_INCLUDED
