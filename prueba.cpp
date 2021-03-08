#include<iostream>

using namespace std;

int main(){
	int estudiantes=0,notas=0,**pm_notas;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>estudiantes;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>notas;
	pm_notas = new  int *[estudiantes];
	
	for (int i=0;i<estudiantes;i++){
		pm_notas[i] = new int[notas+2]; 	
	}
	
	cout<<"--------------Ingrese Notas--------------"<<endl;
	for (int i=0;i<estudiantes;i++){
		
		for (int ii=0;ii<notas;ii++){
			cout<<"Ingrese el codigo del estudiante: ";
			cin>>*pm_notas[0];
			cout<<"Ingrese el nombre del estudiante: ";
			cin>>*pm_notas[1];
			cout<<"Nota "<<ii<<":";
			cin>>*(*(pm_notas+i)+ii);
		}
		
		for (int ii=0;ii<notas;ii++){
		cout<<"Estudiante: "<<i<<" ,Nota: "<<ii<<":";
		cin>>*(*(pm_notas+i)+ii);
		}
	cout<<"------------------------------------"<<endl;
	}
	cout<<"--------------Mostrar Notas--------------"<<endl;
	for (int i=0;i<estudiantes;i++){
		for (int ii=0;ii<notas;ii++){
		cout<<*(*(pm_notas+i)+ii)<<endl;
		}
	cout<<"------------------------------------"<<endl;
	}

	for (int i=0;i<estudiantes;i++){
	delete [] pm_notas[i];
	}

		delete [] pm_notas;

	system("PAUSE");
	return 0;
	
	
}

