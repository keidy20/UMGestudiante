#include "Persona.cpp"
#include<iostream>

using namespace std;
class Estudiante:Persona{
	
	private : string codigo;
	public: 
	
		Estudiante(string nom,string ape,string cod,int tel):Persona(nom,ape,tel){
			codigo=cod;
		}
	
	void setCodigo(string cod){codigo=cod;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setTelefono(int tel){telefono=tel;}	 
	 
	 	string getCodigo(){return codigo;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getTelefono(){return telefono;}	
	
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<codigo<<","<<nombres<<", "<<apellidos<<", "<<telefono<<endl;
}
};


