//09- Crie um programa que apresente a tabuada de qualquer n�mero introduzido pelo utilizador.
//Minist�rio da Educa��o
//Universidade Federal de Santa Maria
//Curso T�cnico em Inform�tica para Internet Integrado ao
//Ensino M�dio

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
