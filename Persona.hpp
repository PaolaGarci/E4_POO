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

    private:
        Persona();
        virtual mostrarPersona() = 0;
        void agregarDatos(string, string, char, int, string);  
};