#include <stdio.h>
#include <stdlib.h>

#define ABACAXI 5.00
#define MACA 1.00
#define PERA 4.00

int main(){
    int opcaoDoMenu, fruta, qAbacaxi, qMaca;
    float total = 0;
    char voltar = 'r';

    printf("Loja de frutas\n");
    printf("Aperte 1 para comecar\n");
    scanf("%d", &opcaoDoMenu);

    if(opcaoDoMenu == 1){
        while(voltar == 'R' || voltar == 'r'){
            printf("\nFrutas:\n");
            printf("1. Abacaxi (R$ %.2f)\n", ABACAXI);
            printf("2. Maca (R$ %.2f)\n", MACA);
            printf("3. Pera (R$ %.2f)\n", PERA);
            printf("\nTotal: R$%.2f\n", total);
            printf("Digite 0 para encerrar\n");
            scanf("%d", &fruta);
            system("clear");
            switch(fruta){
                case 0:
                        voltar = 's';
                        break;

                case 1:
                        printf("\nAbacaxi (R$ %.2f)\n", ABACAXI);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &qAbacaxi);

                        total = total + (qAbacaxi * ABACAXI);
                        system("clear");
                        
                        break;
                case 2:
                        printf("\nMaca (R$ %.2f)\n", MACA);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &qMaca);

                        total = total + (qMaca * MACA);
                        system("clear");
                        break;
                case 3:
                        printf("\nPera (R$ %.2f)\n", PERA);
                        printf("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf("%d", &qMaca);

                        total = total + (qMaca * PERA);
                        system("clear");
                        break;


                default:
                printf("Opcao invalida, digite R para retornar: ");
                scanf(" %c", &voltar);
                        system("clear");
            }


        }
    printf("\nPrograma encerrado\nSeu Total: R$%.2f", total);
    } else
    printf("\nPrograma encerrado\nSeu Total: R$%.2f", total);}
