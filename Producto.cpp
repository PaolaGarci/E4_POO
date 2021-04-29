#include "Paquete.h"

Paquete::Paquete():Envio(){
 
    profundidad=0;
    peso=0;
    costoxkg=0;
}

Paquete::Paquete(string nom, string add, string city, string state,int dest, int rem,double cost, float la, float an, float prof, float weight, float costo):Envio(nom,add,city,state,dest,rem, cost, la, an){
  
    profundidad=prof;
    if (weight>0 && costo>0){
        peso=weight;
        costoxkg=costo;
    }
}
double Paquete::calculaCosto() {
  Costo_envio=Costo_envio + (peso * costoxkg);
  return Costo_envio;
}
