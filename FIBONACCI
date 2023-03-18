#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c = 0, digits = 0;
    cout << "LOS PRIMEROS 10 DIGITOS DE LA SERIE FIBONACCI SON: " << endl;
    cout << a << " " << b << " ";

    while (digits < 10) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        digits = 0;
        int temp = c;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    return 0;
}
