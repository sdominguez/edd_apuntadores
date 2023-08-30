#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
    int cols = 2;
    string **libros;
    int size;

    cout<<"Cuantos libros desea ingresar? ";
    string entrada;
    getline(cin, entrada);
    size = stoi(entrada);

    libros = new string*[size];
    string titulo, autor;
    for(int i = 0; i < size; i++){
        //libros[i] = new string[cols];
        //Usando la desreferencia
        *(libros+i) = new string[cols];
        cout << "\n*** Libro "<<i+1<<"***"<<endl;
        cout<<"Titulo: ";
        getline(cin, titulo);
        cout<<"Autor: ";
        getline(cin, autor);

        //libros[i][0] = titulo;
        //libros[i][1] = autor;

        //Usando la desreferencia
        *(*(libros+i)+0) = titulo;
        *(*(libros+i)+1) = autor;
    }

    cout<< "\nInformación ingresada:\n";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < cols; j++){
            cout<<*(*(libros+i)+j)<<"  ";
        }
        cout<<endl;
    }

    for(int i = 0; i < size; i++){
        delete[] libros[i];
    }

    delete[]libros;

    return 0;
}