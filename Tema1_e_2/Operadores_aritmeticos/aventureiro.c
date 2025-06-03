#include <stdio.h>

int main(){

    int numero1, numero2, resultado = 10;
    int soma, subtracao, multiplicacao, divisao;

    // Recebe números do usuário

    printf("Digite um número: \n");
    scanf("%d", &numero1);

    printf("Digite outro número: \n");
    scanf("%d", &numero2);

    // operação de soma.
    soma = numero1 + numero2;
    resultado += soma; 

    // operação de subtração.
    subtracao = numero1 - numero2;
    resultado -= subtracao;

    // operação de multiplicação
    multiplicacao = numero1 * numero2;
    resultado *= multiplicacao;

    // operação de divisão
    divisao = numero1 / numero2;
    resultado /= divisao;

    printf("A Soma é: %d\n", soma);
    printf("Resultado + é: %d\n", resultado);
    printf("A Subtração é: %d\n", subtracao);
    printf("Resultado - é: %d\n", resultado);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("Resultado * é: %d\n", resultado);
    printf("A Divisão é: %d\n", divisao);
    printf("Resultado / é: %d\n", resultado);

    return 0;
}