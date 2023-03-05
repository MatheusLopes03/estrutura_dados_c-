#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a;
    cout << "Digite o valor de 'a': " << endl;
    cin >> a;

    int b;
    cout << "Digite o valor de 'b': " << endl;
    cin >> b;

    int soma;
    soma = a + b;
    cout << "Soma: " << soma << endl;

    int subt;
    subt = a - b;
    cout << "Subtracao: " << subt << endl;

    int mult;
    mult = a + b;
    cout << "Multiplicacao: " << mult << endl;

//QUOCIENTE DIV
    int quocdiv;
    quocdiv = a / b;
    cout << "Quociente da divisao: " << quocdiv << endl;

//RESTO DIVISAO
    int restodiv;
    restodiv = a % b;
    cout << "Resto da divisao: " << restodiv << endl;

//DIVISAO EXATA (NAO PODE SER INTEIRO)  
    float div;
    div = (float)a / (float)b;
    cout << "Divisao inteira: " << div << endl;

//POTENCIA
    float pot;
    pot = pow(a,b); // a^b
    cout << "Potencia: " << pot << endl;


    return 0;
}