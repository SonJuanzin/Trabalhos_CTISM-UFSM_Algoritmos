//08. Foi feita uma pesquisa entre os habitantes de uma regi�o. Foram coletados os dados de
//idade, sexo (M/F) e sal�rio. Fa�a um algoritmo que informe:
//a) a m�dia de sal�rio do grupo;
//b) maior e menor idade do grupo;
//c) quantidade de mulheres com sal�rio at� R$100,00

#include <stdio.h>

int main() {
    int idade, somaIdades = 0, maiorIdade = 0, menorIdade = 9999;
    char sexo;
    float salario, somaSalarios = 0;
    int mulheresSalarioAte100 = 0;
    int contador = 0;

     printf("Digite os dados da pesquisa (idade, sexo, salario):\n");

    do {
        printf("Idade (digite um numero negativo para encerrar): ");
        scanf("%d", &idade);

        if (idade >= 0) {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);

            printf("Salario: ");
            scanf("%f", &salario);

            somaIdades += idade;
            somaSalarios += salario;
            contador++;

            if (idade > maiorIdade) {
                maiorIdade = idade;
            }

            if (idade < menorIdade) {
                menorIdade = idade;
            }

            if (sexo == 'F' && salario <= 100.00) {
                mulheresSalarioAte100++;
            }
        }
    } while (idade >= 0);

    float mediaSalarios = somaSalarios / contador;

    printf("\nResultados da pesquisa:\n");
    printf("M�dia de sal�rio do grupo: %.2f\n", mediaSalarios);
    printf("Maior idade do grupo: %d\n", maiorIdade);
    printf("Menor idade do grupo: %d\n", menorIdade);
    printf("Quantidade de mulheres com sal�rio at� R$100,00: %d\n", mulheresSalarioAte100);
}
