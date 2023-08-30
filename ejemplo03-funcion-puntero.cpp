#include <iostream>
using namespace std;

int funcion(int);
int funcionPuntero(int*);

int main(){
    int numero = 10;
    cout<<"numero = "<<numero<<endl;
    funcion(numero);
    cout<<"Despues de invocar funcion"<<endl;
    cout<<"numero = "<<numero<<endl;
    funcionPuntero(&numero);
    cout<<"Despues de invocar funcionPuntero"<<endl;
    cout<<"numero = "<<numero<<endl;
    return 0;
}

int funcion(int valor){
    valor += 10;
    return valor;
}

int funcionPuntero(int* valor){
    *valor += 10;
    return *valor;
}