﻿#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("O numero %d e par! \n", i);
        } else {
            printf("O numero %d e impar! \n", i);
        }
        i++;
    }
    return 0;
}