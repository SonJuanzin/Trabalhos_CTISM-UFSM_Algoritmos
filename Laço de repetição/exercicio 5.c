//Dado um pa�s A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um
//pais B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, calcular e imprimir o
//tempo necess�rio para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B.

#include <stdio.h>
int main ()  {

int paisA = 5000000;
int paisB = 7000000;
float taxaNatalidadeA = 0.03;
float taxaNatalidadeB = 0.02;
int anos = 0;

do {
    paisA += paisA * taxaNatalidadeA;
    paisB += paisB * taxaNatalidadeB;
    anos++;
} while (paisA <= paisB);

    printf("Levara %d de tempo para isso! ");
}
