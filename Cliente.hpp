#ifndef CLIENTE_HPP_INCLUDED
#define CLIENTE_HPP_INCLUDED
#include "Persona.hpp"
#include <iostream>
using namespace std;

class Cliente : public Persona
{
    private:
        string RFC;

    public:
        Cliente();
        Cliente(string nom, string dir, char sex, int cel, string fechaNac,string rfc);
        void mostrarPersona();
};
#endif // PAQUETE_H_INCLUDED
