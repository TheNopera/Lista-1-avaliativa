#include <stdio.h>

int main() {
    int somatoria = 0;
    int i;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            somatoria += i;
        }
    }

    printf("Soma dos multiplos de 3 ou 5 abaixo de 1000: %d\n", somatoria);

}
