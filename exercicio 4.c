//Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles
//anunciando um bônus especial. Faça um programa que leia o nome do cliente e o valor de suas
//compras o ano passado. Calcule e mostre um bônus de 10% se o valor das compras for menor
//que R$ 1.000 e de 15% caso contrário.

#include <stdio.h>
int main ()  {

int contador;
float compra, bonus;
char nome;

do {
    contador++;
    printf("Cliente %d:\n", contador);
    printf("Nome: ");
    scanf(" %c", &nome);

    printf("Digite seu valor de compra: ");
    scanf(" %f", &compra);

    if (compra < 1000) {
        bonus = compra * 1.1;
        printf("Seu desconto foi de 10%%\n");

    } else {
        bonus = compra * 1.15;
        printf("Seu desconto foi de 15%%\n");

    }
    printf("Bonus para o cliente %c: R$ %.2f\n\n", nome, bonus);
}
    while (contador < 15);
}
