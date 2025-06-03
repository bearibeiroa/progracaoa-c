#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um numero (um numero par encerra o programa): ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("Par!\n");
        } else {
            printf("Impar!\n");
        }

    } while (num % 2 != 0);

    printf("Voce digitou um numero par, saindo do programa...");

    return 0;
}
