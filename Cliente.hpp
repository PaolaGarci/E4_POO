#ifndef CLIENTE_HPP_INCLUDED
#define CLIENTE_HPP_INCLUDED
#include "Persona.hpp"

using namespace std;

class Cliente:public Persona{
private:
    string RFC;

public:
    Cliente();
    Cliente(string rfc):Persona();

};
#endif // PAQUETE_H_INCLUDED