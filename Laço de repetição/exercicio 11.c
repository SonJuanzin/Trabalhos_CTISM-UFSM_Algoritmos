//11- A s�rie de Fibonacci � formada pela seguinte sequencia: 1,1,2,3,5,8,13,21,34,..... etc. Nesta
//s�rie, o pr�ximo elemento � obtido atrav�s da soma dos dois anteriores. Escreva um algoritmo
//que exiba a s�rie de Fibonacci at� o vig�simo termo

#include <stdio.h>

int main() {
    int termos = 20;
    int fibonacci[termos];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    printf("S�rie de Fibonacci at� o vig�simo termo:\n");
    printf("%d\n", fibonacci[0]);
    printf("%d\n", fibonacci[1]);

    for (int i = 2; i < termos; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%d\n", fibonacci[i]);
    }
}
