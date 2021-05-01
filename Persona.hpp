#pragma once
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

    public:
        //Persona();
        //Persona(string, string, char, int, string);
        virtual void mostrarPersona() = 0;
        void agregarDatos(string, string, char, int, string);  
};
