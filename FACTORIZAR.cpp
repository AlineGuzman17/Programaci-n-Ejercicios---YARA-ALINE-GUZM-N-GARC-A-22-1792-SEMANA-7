/*
	CREADO POR YARA ALINE GUZMÁN GARCÍA
	PROYECTO: FACTORIAL CON UN NUMERO INGRESADO POR EL USUARIO
*/
#include <iostream>

using namespace std;
 
int main () 
{
	int i,n;
	float factorial;
	cout <<"INGRESE UN NUMERO:";
	cin>> n;
	i = 1; 
	factorial = 1;
	while (i <= n)
	{
		factorial = factorial * i;
		cout << i << "! = " << factorial<<endl;
		i++;
	}
	cout<< "   EL FACTORIAL DE  "<<n<<"   ES:   "<<factorial << endl;
	return 0;
}
