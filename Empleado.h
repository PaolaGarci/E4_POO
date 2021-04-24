#include <iostream>
#include "Persona.hpp"
using namespace std;

class Empleado{
    private:
        string cargo;
    public:
        Empleado();
        Empleado(string); //Recibe el cargo 
        void agregar();
        void borrar();
        void modificar();
};