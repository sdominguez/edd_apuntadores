#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    string* titulos = nullptr;

    int size;
    cout<< "Cuantos libros desea ingresar? ";
    string entrada;
    getline(cin, entrada);
    size = stoi(entrada);

    titulos = new string[size];

    cout<< "Ingrese la siguiente información de los Libros\n";
    for(int i = 0; i < size; i++){
        cout<<"\n Título: ";
        getline(cin, *(titulos+i));
    }

    cout<< "\nInformación ingresada:\n";
    for(int i = 0; i < size; i++){
        //cout<<*(titulos+i);
        cout<<titulos[i]<<endl;
    }

    delete[] titulos;
    titulos = nullptr;

    return 0;
}