#include <stdio.h>

void funcDividir(int n);

int main(){
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    funcDividir(numero);
}

void funcDividir(int n){
    int i;

    printf("Divisores de: %d\n", n);
    for(i = n; i >=0; i--){
        if(n % i == 0){
            printf("%d\t", i);
        }
    }
}