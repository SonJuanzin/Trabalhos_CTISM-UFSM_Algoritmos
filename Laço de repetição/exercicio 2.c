#include <stdio.h>

int main() {
    int idade, soma = 0;
    int quantidade = -1; // Começa com -1 para desconsiderar a idade zero

    printf("Digite as idades (digite 0 para finalizar):\n");

    do {
        printf("Idade: ");
        scanf("%d", &idade);

        soma += idade;
        quantidade++;
    } while (idade != 0);

    float media = (float)soma / quantidade;
    printf("A média das idades digitadas é: %.2f\n", media);
}
