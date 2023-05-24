//06- Faça um programa que receba a idade, a altura e o peso de 25 pessoas. Calcule e mostre:
//a) A quantidade de pessoas com idade superior a 50 anos;
//b) A média das alturas das pessoas com idade entre 10 e 20 anos;
//c) A porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas
//analisadas.

#include <stdio.h>

int main() {
    const int NUM_PESSOAS = 25;
    int idade, contadorIdadeSuperior50 = 0, contador = 0;
    float altura, peso, somaAlturas = 0;
    int contadorPesoInferior40 = 0;

    do {
        printf("Pessoa %d:\n", contador + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > 50) {
            contadorIdadeSuperior50++;
        }

        if (idade >= 10 && idade <= 20) {
            printf("Digite a altura (em metros): ");
            scanf("%f", &altura);
            somaAlturas += altura;
        }

        printf("Digite o peso (em quilos): ");
        scanf("%f", &peso);

        if (peso < 40) {
            contadorPesoInferior40++;
        }

        contador++;
    } while (contador < NUM_PESSOAS);

    float mediaAlturas = somaAlturas / NUM_PESSOAS;
    float porcentagemPesoInferior40 = (float)contadorPesoInferior40 / NUM_PESSOAS * 100;

    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contadorIdadeSuperior50);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", mediaAlturas);
    printf("Porcentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", porcentagemPesoInferior40);
}
