#include "Empleado.hpp"

// Constructor Default
Empleado :: Empleado()
{
    Cargo="";
    Sucursal="";
}

// Constructor con parametros
Empleado :: Empleado(string nom, string dir, char sex, int cel, string fechaNac,string car, string suc)
{
    Cargo=car;
    Sucursal=suc;
    this->agregarDatos(nom, dir, sex, cel, fechaNac);
}
void Empleado :: transferir(string sucursalNueva)
{
    Sucursal = sucursalNueva;
}
//setters
void Empleado::setSucursal(string s){
    Sucursal=s;
}
void Empleado::setCargo(string c){
    Cargo=c;
}
//getters
string Empleado::getCargo(){
    return Cargo;
}

void Empleado :: mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "Cargo: " << Cargo << endl;
    cout << "Sucursal: " << Sucursal << endl;
}
void Empleado::generarOrden(Cliente c, InventarioProductos InvProd,string formaPago ){
    //incluye producto, total y cliente
    if (Cargo=="gerente" || Cargo=="vendedor"){
        c.mostrarPersona();
        InvProd.mostrarInventario();
        cout<<"El método de pago es: "<<formaPago<<endl;
        int total=0;
        for (int i=0;i<5;i++){
            total=total+InvProd.getCantidadExistentes(InvProd.listaProductos[i])*InvProd.listaProductos[i].getPrecioVenta();
        }
        cout<<"El total de orden es: "<<total<<endl;
        cout << "Cliente que genero la orden" << endl;
        c.mostrarPersona();
        cout << " " << endl;
        
    }
    else{
        cout<<"Solo los gerentes y vendedores pueden realizar una venta"<<endl;
    }
}


