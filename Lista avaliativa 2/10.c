#include <stdio.h>

int main() {
    int i, numero, somatoria = 0;

    printf("Insira 10 números inteiros:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &numero);
        somatoria += numero;
    }

    printf("Média: %.2f", (float) somatoria / 10);
}
