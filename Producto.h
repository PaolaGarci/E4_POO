#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED
#include "Envio.h"

using namespace std;

class Paquete:public Envio{
private:

    float profundidad;
    float peso;
    float costoxkg;
public:
    Paquete();
    Paquete(string nom, string add, string city, string state,int dest, int rem,double cost, float la, float an, float prof, float weight, float costo);
    double calculaCosto();
};
#endif // PAQUETE_H_INCLUDED



