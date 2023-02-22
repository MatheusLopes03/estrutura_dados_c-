#include <iostream>

using namespace std;

main() {
    int *MAX = new int();
    cout << "Sequencia ate: ";
    cin >> *MAX;

    int anterior = 0;
    int atual = 1;
    int soma;
    int *vetor = new int[*MAX];


    vetor[0] = anterior;
    vetor[1] = atual;
    for (int i= 2; i < *MAX; i++)
    {
        soma = anterior + atual;
        vetor[i] = soma;
    }

    for (int i= 0; i < *MAX; i++){
    cout << vetor[i] << " " << &vetor[i] << endl;
    }

    delete(MAX);
    delete(vetor);
}