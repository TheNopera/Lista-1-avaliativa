#include <stdio.h>

int main(){
    int i, n;
    int fibonacci[2] = {0, 1};
    int next;

    printf("Digite o numero para calcular a posicao: ");
    scanf("%d", &n);

    while(n > 0 && n != 0 && n != 1){
        for(i = 2; i < n; i++){
            next = fibonacci[0] + fibonacci[1];
            fibonacci[0] = fibonacci[1];
            fibonacci[1] = next;
        }
    printf("%dº numero na sequencia: %d", n, fibonacci[1]);
    return 0;
    }
    printf("Erro, tente novamente");
}