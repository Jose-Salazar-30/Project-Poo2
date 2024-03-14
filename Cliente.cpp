#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	
	private : int nit;
	
	private :
		Cliente(){
		}
		
		Cliente(string nom, string ape, string dir, string fn, int tel, int n) :
		Persona (nom,ape,dir,fn,tel) {
			nit = n;
		}
		/*Setters*/
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setFecha_Nacimiento(string fn){fecha_nacimiento = fn;}
		void setTelefono(int tel){telefono = tel;}
		void setNit(int n){nit = n;}
		
		/*Getters*/
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFecha_Nacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		int getNit(){return nit;}
		
		void crear(){
			cout<<"Se ha ingresado al metodo Crear"<<endl;
		}
		
		void leer(){
			cout<<"Se ha ingresado al metodo Leer"<<endl;
		}
	
		void actualizar(){
			cout<<"Se ha ingresado al metodo Actualizar"<<endl;
		}
		
		void borrar(){
			cout<<"Se ha ingresado al metodo Borrar"<<endl;
		}
};
