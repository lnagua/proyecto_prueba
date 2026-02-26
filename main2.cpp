#include <iostream>
#include "point.h"

using namespace std;

int main() {
   int x =34;
   int *p = &x;
   cout << "Valor de x: " << x << endl; // Imprime el valor de x
   cout << "Dirección de x: " << &x << endl; // Imprime la dirección de x
   cout << "Valor de p: " << &p << endl;
   int b= *p;
   cout << "Valor de b: " << b << endl;

    // ejemplo de uso de referencia
    int a = 10;
    int &ref = a; // ref es una referencia a a
    cout << "Valor de a: " << a << endl; // Imprime el valor de a
    cout << "Valor de ref: " << ref << endl; // Imprime el valor de ref (que es el mismo que a)
    ref = 20; // Cambia el valor de a a través de la referencia
    cout << "Valor de a después de cambiar ref: " << a << endl; // Imprime el nuevo valor de a
    return 0;
}