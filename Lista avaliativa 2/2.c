#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas (x e y) do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas (x e y) do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.4f\n", x1, y1, x2, y2, distancia);
}
