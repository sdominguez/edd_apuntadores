#include <iostream>

using namespace std;

/***
 * Programa que muestra un ejemplo de aritmética de punteros
 * el nombre de la variable puntero más un indice hace referencia
 * al siguiente elemento de la memoría
*/

int main(){
    int numeros[5]{11, 22, 33, 44, 55};
    int *p_numeros = numeros;

    cout << *(p_numeros + 0) << endl;
    cout << *(p_numeros + 1) << endl;
    cout << *(p_numeros + 2) << endl;
    cout << *(p_numeros + 3) << endl;
    cout << *(p_numeros + 4) << endl;

    cout << *(p_numeros + 10) << endl;

    return 0;
}