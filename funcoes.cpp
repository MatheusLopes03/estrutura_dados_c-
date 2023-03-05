#include <iostream>

using namespace std;

#define pi 3,14; //CONSTANTE (SEMPRE O MESMO VALOR)

void ola(){
    cout << "ola";
}

int somar(int x, int y) {
    int soma;
    soma = x + y;
    return soma;
}



int main(){
    ola();

    int a = 5, b = 4;
    int s;
    s =  somar(a,b);
    cout << "Soma: " << s << endl;

    return 0;
}

