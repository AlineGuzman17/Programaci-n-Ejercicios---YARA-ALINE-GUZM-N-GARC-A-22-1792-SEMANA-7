/*
	CREADO POR YARA ALINE GUZMÁN
	PROYECTO: TABLAS DE MULTIPLICAR CON UN NUMERO INGRESADO POR EL USUARIO
	
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
}
