//MINIMO DIVISOR COMUM

#include <iostream>
#include <math.h>

using namespace std;

int resto;

int calcularMDC(int x, int y){
    cin >> x, y;
    resto = x % y;
    if (resto == 0){
    return y;
} else {
    return calcularMDC(y, resto);
}

}



int main(){


return 0;
}