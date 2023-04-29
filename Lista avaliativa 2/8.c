#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Numero (inteiro): ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        printf("Outro numero (inteiro): ");
        scanf("%d", &num);
    }

    printf("Maior numero inserido: %d\n", maior);
    printf("Menor numero inserido: %d\n", menor);

    return 0;
}
