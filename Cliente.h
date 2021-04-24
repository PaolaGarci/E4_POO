#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Persona.h"

using namespace std;

class Cliente:public Persona{
private:
    string RFC;

public:
    Cliente();
    Cliente(string rfc):Persona();

};
#endif // PAQUETE_H_INCLUDED
