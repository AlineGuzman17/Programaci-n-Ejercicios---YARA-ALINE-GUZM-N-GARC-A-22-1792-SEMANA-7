/*
CREADO POR YARA ALINE GUZMÁN GARCÍA
PROYECTO: NÚMEROS PARES INGRESADO POR EL USUARIO
*/
#include <iostream>
#include <cstdlib>



using namespace std;

int n; 


int main(){

div_t resultado;

cout << "INGRESE UN NUMERO" << endl;

cin >> n; 

resultado=div(n,2);

if (resultado.rem>0)

{

cout << n << " ES IMPAR" << endl;

}

else {

    cout << n << " ES PAR" << endl;

}



cin.get();

cin.ignore();

return 0;

}
