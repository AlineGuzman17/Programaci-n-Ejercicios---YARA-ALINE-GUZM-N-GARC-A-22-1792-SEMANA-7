/*
CREADO POR YARA ALINE GUZMÁN GARCÍA
PROYECTO: NÚMEROS PRIMOS INGRESADO POR EL USUARIO
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    bool es_primo = true;

    cout << "INGRESE UN NUMERO";
    cin >> n;

    if (n <= 1) {
        es_primo = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                es_primo = false;
                break;
            }
        }
    }

    if (es_primo) {
        cout << n << " ES UN NUMERO PRIMO" << endl;
    }
    else {
        cout << n << " NO ES UN NUMERO PRIMO" << endl;
    }

    return 0;
}
