#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	int cod;
	char nombre[40];
}alumno, *p_alumno = &alumno;

void aDatos();
void mostrarDatos(Alumno *);

int main(){
	
	aDatos();
	mostrarDatos(p_alumno);
	
	getch();
	return 0;
}

void aDatos(){
	cout<<"Ingrese el nombre del alumno: ";
	cin.getline(p_alumno->nombre,40,'\n');
	cout<<"Ingrese el codigo del alumno: ";
	cin>>p_alumno->cod;
}

void mostrarDatos(Alumno *p_alumno){
	cout<<"\n\n";
	cout<<"Codigo: "<<p_alumno->cod<<"  Nombre: "<<p_alumno->nombre<<endl;
}


