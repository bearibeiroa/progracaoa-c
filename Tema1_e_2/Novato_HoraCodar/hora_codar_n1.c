#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
        
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\nMatrícula: %d\n", nome, matricula);
    printf("Idade: %d\nAltura: %.2f\n", idade, altura);

    // Print tabulado
    printf("Nome aluno\tMatrícula\tIdade\tAltura\n");
    printf("%s\t%d\t%d\t%.2f", nome,matricula, idade, altura);

    return 0;

}