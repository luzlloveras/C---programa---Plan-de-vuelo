/*  1. Solicitar coordenadas de un plan de vuelo (x, y).
    2. El fin de ruta se indica con -1.
    3. El sistema debe informar cual es la distancia total recorrida. */

#include <stdio.h>
#include <math.h>
float distancia(int, int, int, int);
int cuad(int a);


int main() {
    int x1, y1, x2, y2, z;
    float suma_dist=0;

    printf("Ingrese coordenada x:");
    scanf("%d", &x1);
    printf("Ingrese coordenada y:");
    scanf("%d", &y1);
    printf("Ingrese coordenada x:");
    scanf("%d", &z);
    while (z >= 0) {
        x2=z;
        printf("Ingrese coordenada y:");
        scanf("%d", &y2);
        suma_dist = suma_dist + distancia(x1, y1, x2, y2);

        x1=x2; //desplazo x2 a x1
        y1=y2; //desplazo y2 a y1

        printf("\nIngrese coordenada x:");
        scanf("%d", &z);
    }

    printf("\n La distancia recorrida es: %.2f", suma_dist);


    return 0;
}

int cuad (int a) {
    return a*a;
}

float distancia(int x1, int y1, int x2, int y2) {
    return (sqrt ( cuad(x2-x1) + cuad(y2-y1) ));
}