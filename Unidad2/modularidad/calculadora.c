#include <stdio.h>
#include "area.h"
#include "volumen.h"

float areaCirculo(float radio){
    return 3.1416 * radio * radio;
}

float areaCuadrado(float lado){
    return lado * lado;
}

float volumenEsfera(float radio){
    return (4.0/3.0) * 3.1416 * radio * radio * radio;
}

float volumenCubo(float lado){
    return lado * lado * lado;
}

int main(){
    float radio, lado;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    printf("Area del circulo: %.2f\n", areaCirculo(radio));

    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);

    printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
    printf("Volumen de la esfera: %.2f\n", volumenEsfera(radio));
    printf("Volumen del cubo: %.2f\n", volumenCubo(lado));

    return 0;
}