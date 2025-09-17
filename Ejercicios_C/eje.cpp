#include<iostream>
using namespace std;
//Evita tener que escribir std::
int main(){
    int n, suma=0;  
    //Se declara que n es el numero de elementos y suma es la variable que guardara la suma
    cout<<"Ingrese la cantidad de numeros a sumar: "; cin>>n;
    //Cout imprime en pantalla y cin guarda el valor en n
    int numeros[n];
    //Se declara el arreglo numeros con n elementos
    for(int i=0; i<n; i++){
        //Bucle que se repite n veces
        cout<<"Ingrese el numero "<<i+1<<": "; cin>>numeros[i];
        suma+=numeros[i];
    }
    cout<<"La suma de los elementos es: "<<suma<<endl;
    return 0;
}   
// Programa que suma los elementos de un arregloo
