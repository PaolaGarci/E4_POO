#ifndef CLIENTE_HPP_INCLUDED
#define CLIENTE_HPP_INCLUDED
#include "Persona.hpp"

using namespace std;

class Cliente:public Persona{
private:
    string RFC;

public:
    Cliente();
<<<<<<< HEAD
    Cliente(string rfc):Persona();
    void generarOrden();
=======
    Cliente(string nom, string dir, char sex, int cel, string fechaNac,string rfc):Persona();
>>>>>>> 34ed70d320f2859d8bed433b9ce32fe3a95773b4

};
#endif // PAQUETE_H_INCLUDED
