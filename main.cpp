#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;
void practica();
int suma(int numeroUno, int numeroDos);
int resta(int numeroUno, int numeroDos);
int producto(int numeroUno, int numeroDos);
int division(int numeroUno, int numeroDos);

int main(){
    string entrada;
    getline(cin, entrada);
    vector<char> variableGeneral(entrada.begin(), entrada.end());

    vector<int> numeros;
    int tamanioEntrada = static_cast<int>(entrada.size()-1);
    string numero;
    char signo;

    for(int i = 0; i<= tamanioEntrada; i++)
    {
        if(isdigit(variableGeneral[i])){
            numero += variableGeneral[i];
            //numero = variableGeneral[i] - '0';
            if(i == tamanioEntrada){
                numeros.push_back(stoi(numero));
                numero = "";
            }
        }
        else{
            numeros.push_back(stoi(numero));
            numero = "";
            signo = variableGeneral[i];
        }
    }

    int resultado = 0;
    switch (signo) {
    case '+':
        resultado = suma(numeros[0], numeros[1]);
        cout<< "Resultado: " << resultado;
        break;
    case '-':
        resultado = resta(numeros[0], numeros[1]);
        cout<< "Resultado: " << resultado;
        break;
    case '*':
        resultado = producto(numeros[0], numeros[1]);
        cout<< "Resultado: " << resultado;
        break;
    case '/':
        resultado = division(numeros[0], numeros[1]);
        cout<< "Resultado: " << resultado;
        break;
    default:
        cout<< "Error de signo!";
        break;
    }

    cout << endl;
    return 0;
}

void practica(){
    char nombre = ' ';
    cout<< "Introduzca nombre" << endl;
    //cin.get(nombre);
    cout<< static_cast<int>(nombre) << endl;
}

int suma(int numeroUno, int numeroDos){
    return numeroUno + numeroDos;
}
int resta(int numeroUno, int numeroDos){
    return numeroUno - numeroDos;
}
int producto(int numeroUno, int numeroDos){
    return numeroUno * numeroDos;
}
int division(int numeroUno, int numeroDos){
    return numeroUno / numeroDos;
}
