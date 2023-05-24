//Faça um algoritmo que determine o maior entre N números. A condição de parada é a entrada
//de um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0
//(ZERO).

#include <stdio.h>
int main ()  {

int N, contador = 0;

do {
    printf("Digite o seu numero (digite 0 para parar) ");
    scanf("%d", &N);

    if (N > contador
        0) {
        contador = N;
    }
} while( N != 0);

printf("O maior número digitado é: %d\n", N);
}
