//07. Elabore um programa que receba como entrada uma lista de n�meros positivos e negativos,
//terminada com o n�mero zero. O programa deve fornecer como sa�da a soma dos n�meros
//positivos, a soma dos n�meros negativos e a soma das duas somas parciais.

#include <stdio.h>
int main ()  {

int numero;
int somapositiva = 0;
int somanegativa = 0;
float somatotal;

printf("Digite uma lista de numero positivos e negativos (digite 0 para parar o programa)\n" );

do {
    printf("Numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        somapositiva += numero;
    }   else if (numero < 0) {
        somanegativa += numero;
    }
} while (numero != 0);

somatotal = somanegativa + somapositiva;

printf("A soma dos numeros positivos foi: %d", somapositiva);
printf("A soma dos numeros negativos foi: %d", somanegativa);
printf("A soma total foi: %f", somatotal);
}
