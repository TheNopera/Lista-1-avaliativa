#include <stdio.h>
#include <math.h>
#define PI 3.14159

float area(float r){
    float area = 4 * PI * pow(r, 2);

    return area;
}

float volume(float r){
    float vol = 4 * PI * pow(r,3);

    return vol;
}

int main(){
    float raio;


    printf("Raio da esfera: ");
    scanf("%f", &raio);

    printf("Volume: %.2f\n", volume(raio));
    printf("Area: %.2f", area(raio));

}
