#include <iostream>
#include "BuddySystem.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BuddySystem obj; //se declara el objeto que usaremos para llamar a la clase
	
	int opc,opc2=0;
	int tam;//variables que se usaran de apoyo para generar los parametros del proceso
	do{
		cout<<endl<<"\tEliga la opcion del tamaño fijo de la memeoria"
		<<endl<<"\t(1mb, 4mb, o 8mb):  ";
		cin>>opc;
		switch(opc){
			//Seleccion 1mb
			case 1:
				cout<<"\tEl tamo fijo sera 1mb"<<endl;
				opc2=0;
				//Aqui iria para fijar el tamaño de la memoria en la Clase de BudySystem
				break;
				
			//Seleccion 4mb	
			case 4:
				cout<<"\tEl tamo fijo sera 4mb"<<endl;
				//Aqui iria para fijar el tamaño de la memoria en la Clase de BudySystem
				opc2=0;
				break;
				
				
			case 8:
				cout<<"\tEl tamo fijo sera 8mb"<<endl;
				//Aqui iria para fijar el tamaño de la memoria en la Clase de BudySystem
				opc2=0;
				break;
				
				
			default:
				cout<<"\tPorfavor Eliga una Opcion Valida"<<endl;
				system("pause");
				system("cls");
				opc2=1;
				break;		
		}
	}while(opc2==1);
	cout<<endl<<"Indica el tamaño maximo para cada proceso en kb (no valores menores a 32kb):"<<endl;
	cin>>tam;
	
	obj.SeleccionProceso(300,1,tam);

	cout<<endl;
}
