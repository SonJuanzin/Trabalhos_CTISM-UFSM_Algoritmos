//09- Crie um programa que apresente a tabuada de qualquer número introduzido pelo utilizador.
//Ministério da Educação
//Universidade Federal de Santa Maria
//Curso Técnico em Informática para Internet Integrado ao
//Ensino Médio

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
