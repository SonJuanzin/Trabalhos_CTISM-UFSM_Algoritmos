//10- Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre
//acidentes de trânsito. Foram obtidos os seguintes dados:
//- código da cidade
//- estado (RS, SC, PR, SP, RJ, ..)
//- número de veículos de passeio (em 1992)
//- número de acidentes de trânsito com vítimas (em 1992)
//Deseja-se saber:
//a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
//b) qual a média de veículos nas cidades brasileiras
//c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.

#include <stdio.h>

int main() {
    int codigo, numCidades = 200;
    char estado[3];
    int numVeiculos, numAcidentes;
    int maiorIndiceAcidentes = 0, menorIndiceAcidentes = 9999;
    int cidadeMaiorIndice, cidadeMenorIndice;
    int somaVeiculos = 0, mediaVeiculos;
    int somaAcidentesRS = 0, numCidadesRS = 0, mediaAcidentesRS;

    for (int i = 0; i < numCidades; i++) {
        printf("Codigo da cidade: ");
        scanf("%d", &codigo);

        printf("Estado (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Numero de veiculos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);

        printf("Numero de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &numAcidentes);

        if (numAcidentes > maiorIndiceAcidentes) {
            maiorIndiceAcidentes = numAcidentes;
            cidadeMaiorIndice = codigo;
        }

        if (numAcidentes < menorIndiceAcidentes) {
            menorIndiceAcidentes = numAcidentes;
            cidadeMenorIndice = codigo;
        }

        somaVeiculos += numVeiculos;

        if (estado[0] == 'R' && estado[1] == 'S') {
            somaAcidentesRS += numAcidentes;
            numCidadesRS++;
        }
    }

    mediaVeiculos = somaVeiculos / numCidades;
    mediaAcidentesRS = somaAcidentesRS / numCidadesRS;

    printf("\nResultados da estatística:\n");
    printf("Maior indice de acidentes de transito: %d (cidade %d)\n", maiorIndiceAcidentes, cidadeMaiorIndice);
    printf("Menor indice de acidentes de transito: %d (cidade %d)\n", menorIndiceAcidentes, cidadeMenorIndice);
    printf("Media de veiculos nas cidades brasileiras: %d\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %d\n", mediaAcidentesRS);
}
