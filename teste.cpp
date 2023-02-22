#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

//NUMEROS INTEIROS
    int idade;
    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout << "Idade: " << idade << endl;
    

//NUMEROS REIAS
    float real;
    real = 5.2;
    cout << real << endl;


//NUMEROS REAIS MAIORES (OCUPA MAIS ESPACO NA MEMORIA)
    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;


//VERDADEIRO OU FALSO (0 OU 1)
    bool booleano;
    booleano = true;
    cout << booleano << endl;


//UMA LETRA (COM VETORES SE PODE TRABALHAR COM MAIS LETRAS)
    char letra;
    letra = 'b';
    cout << letra << endl;


//PALAVRAS
    string palavra;
    palavra = 'bola';
    cout << palavra << endl;


    return 0;
}