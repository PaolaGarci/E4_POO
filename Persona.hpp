#include <iostream>
using namespace std;

class Persona 
{
    protected:
        string nombre;
        string direccion;
        char sexo;
        int telefono;
        string fechaNacimiento;

    private:
        Persona();
        virtual generarOrden() = 0;
        void mostrarPersona();
        void agregarDatos(string, string, char, int, string);  
};