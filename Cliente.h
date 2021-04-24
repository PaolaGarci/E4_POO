#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Persona.hpp"

using namespace std;

class Cliente:public Persona{
private:
    int RFC;

public:
    Cliente();
    Cliente( int rfc);

};
#endif // PAQUETE_H_INCLUDED
