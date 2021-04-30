#include "Cliente.hpp"

Cliente::Cliente():Persona(){
    RFC="";
 
}

Cliente::Cliente(string nom, string dir, char sex, int cel, string fechaNac,string rfc):Persona(){
  
   RFC=rfc
}
