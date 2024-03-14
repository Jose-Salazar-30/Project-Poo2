#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	
	private : int codigo_empleado;
			  string puesto;
			  
	private :
		Empleado(){
		}
		
		Empleado(string nom, string ape, string dir, string fn, int tel, int codEmp, string pue) :
		Persona(nom,ape,dir,fn,tel) {
			codigo_empleado = codEmp;
			puesto = pue;
		}
		
		/*Setters*/
		void setNombres(string nom){nombres = nom;} 
		void setApellidos(string ape){apellidos = ape;} 
		void setDireccion(string dir){direccion = dir;} 
		void setFecha_Nacimiento(string fn){fecha_nacimiento = fn;} 
		void setTelefono(int tel){telefono = tel;} 
		void setCodigo_Empleado(int codEmp){codigo_empleado = codEmp;} 
		void setPuesto(string pue){puesto = pue;}
		
		/*Getters*/
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFecha_Nacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		int getCodigo_Empleado(){return codigo_empleado;}
		string getPuesto(){return puesto;}
		
		void crear() {
			cout<<"Se ha ingresado al metodo Crear"<<endl;
		}
		
		void leer() {
			cout<<"Se ha ingresado al metodo Leer"<<endl;
		}
		
		void actualizar(){
			cout<<"Se ha ingrsado al metodo Actualizar"<<endl;
		}
		
		void borrar(){
			cout<<"Se ha ingresado al metodo Borrar"<<endl;
		}
};
