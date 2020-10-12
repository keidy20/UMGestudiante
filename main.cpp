#include"Estudiante.cpp"
#include<iostream>
using namespace std;
int main(){
	string codigo,nombres,apellidos;
	int telefono;
	cout<<"Ingrese el Codigo: "<<endl;
	cin>>codigo;
	cout<<"Ingrese Nombres: "<<endl;
	cin>>nombres;
	cout<<"Ingrese Apellidos:"<<endl;
	cin>>apellidos;
	cin.ignore();
	cout<<"Ingrese Telefono: "<<endl;
	cin>>telefono;
	
	Estudiante obj = Estudiante(codigo,nombres,apellidos,telefono);
	obj.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese el Codigo: "<<endl;
	cin>>codigo;
	cout<<"Ingrese Nombres: "<<endl;
	cin>>nombres;
	cout<<"Ingrese Apellidos:"<<endl;
	cin>>apellidos;
	cout<<"Ingrese Telefono: "<<endl;
	cin>>telefono;
	obj.setCodigo(codigo);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setTelefono(telefono);
	obj.mostrar();
	
}
