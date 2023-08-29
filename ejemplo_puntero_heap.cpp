#include <iostream>

using namespace std;

/**
 * Ejemplo:
 * asignación de memoría dinámica y desreferencia
 * diferencia entre espacio usado por 
 * las variables apuntador y datos 
*/

int main(){

    int *x = new int;
    *x = 32;

    cout<< sizeof(*x) << endl;
    cout<< sizeof(x) << endl;

    char *c = new char;
    *c = 'x';

    cout<< sizeof(*c) << endl;
    cout<< sizeof(c) << endl;

    delete c;
    delete x;

    return 0;
}