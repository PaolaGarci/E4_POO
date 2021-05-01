//#include "Cliente.hpp"
#include "sucursal.hpp"
//#include "Empleado.hpp"
#include "InventarioProductos.hpp"

#include <iostream>
using namespace std;

int main (){
    cout<<"Bienvenidos al Daxuscorporativo"<<endl;
    cout<<"Estos son los productos que tendran las sucursales"<<endl;
    //crear productos que tendran todas las sucursales
    Producto sopa("sopa",1, 15,2,4),manzana("manzana",2,20,2,4),pera("pera",3,30,2,3);
    Producto cloro("cloro",4,45,8,5),suavitel("suavitel",5,13,2,4); 
    
    // Creando una sucursal
     cout<<"Sucursal 2"<<endl;
    Sucursal sucursal1("Vallarta");
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.agregar(sopa, 5);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.borrar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(manzana, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);

    // Creando un empleado Sucursal 1
    Empleado emp10("Juan","av. X",'M',33234565,"23/04/01","gerente","Vallarta");
    Empleado emp11("Juan","av. X",'M',33234565,"23/04/01","vendedor","Vallarta");
    Empleado emp12("Juan","av. X",'M',33234565,"23/04/01","administrador","Vallarta");

    sucursal1.mostrarSucursal();
    cout<<"Sucursal 2"<<endl;
    //Creando sucursal 2
    Sucursal sucursal2("NO Vallarta");
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.agregar(sopa, 5);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.borrar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(manzana, 2);
    sucursal1.mostrarCantidadProd(sopa);
    sucursal1.mostrarCantidadProd(manzana);
    sucursal1.agregar(sopa, 2);
    sucursal1.mostrarCantidadProd(sopa);
    // Creando un empleado Sucursal 2
    Empleado emp1("Juan","av. X",'M',33234565,"23/04/01","gerente","Vallarta");
    Empleado emp2("Juan","av. X",'M',33234565,"23/04/01","vendedor","Vallarta");
    Empleado emp3("Juan","av. X",'M',33234565,"23/04/01","administrador","Vallarta");

    sucursal1.mostrarSucursal();
    
    // Creando un cliente
    Cliente c1("pepe","sss",'M',2333345,"01/01/02","A000000");

    InventarioProductos orden1;
    orden1.setCantidadExistentes(sopa,2);
    orden1.setCantidadExistentes(manzana,3);
    emp3.generarOrden(c1,orden1,"tarjeta");
    //Generar orden 2
     orden2.setCantidadExistentes(cloro,2);
    orden2.setCantidadExistentes(suavitel,3);
    emp2.generarOrden(c1,orden1,"efectivo");
    //Cliente(string nom, string dir, char sex, int cel, string fechaNac,string rfc)
    return 0;
}
