#include <stdio.h>
func formula(float a, float b, float c, float d){
    return (a*b) - (c*d);
}


int main()
{
    float a, b, c, d, dif;

    printf("digite o valor de A: ");
    scanf("%f", &a);

    printf("digite o valor de B: ");
    scanf("%f", &b);

    printf("digite o valor de C: ");
    scanf("%f", &c);

    printf("digite o valor de D: ");
    scanf("%f", &d);

    dif = formula(a,b,c,d)


    printf("Diferenca = (%.2f * %.2f - %.2f * %.2f)\nDiferenca = %.2f", a, b, c, d, dif);
}
