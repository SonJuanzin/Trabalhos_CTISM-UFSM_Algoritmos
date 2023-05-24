//Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um
//pais B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, calcular e imprimir o
//tempo necessário para que a população do país A ultrapasse a população do país B.

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
