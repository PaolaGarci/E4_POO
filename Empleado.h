#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include <iostream>
#include "Persona.hpp"
using namespace std;

class Empleado:public Persona{
    private:
        string cargo;
    public:
        Empleado();
        Empleado(string); //Recibe el cargo 
        void agregar();
        void borrar();
        void modificar();
};
#endif