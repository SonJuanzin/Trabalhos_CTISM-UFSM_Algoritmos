//Fa�a um programa que receba dez n�meros e que calcule e mostre a quantidade de n�meros
//entre 30 e 90

#include <stdio.h>

int main() {
    int numero, quantidade = 0;
    int contador = 0;

    printf("Digite dez numeros:\n");

    do {
        printf("Numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero >= 30 && numero <= 90) {
            quantidade++;
        }

        contador++;
    } while (contador < 10);

    printf("A quantidade de numeros entre 30 e 90 �: %d\n", quantidade);
}
