#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int entero=INT16_MIN;
    long largo;
    char caracter;
    float flotante;
    double doble;
    scanf("%d %ld %c %f %lf", &entero, &largo, &caracter, &flotante, &doble);
    printf("%d\n", entero);
    printf("%ld\n", largo);
    printf("%c\n", caracter);
    printf("%f\n", flotante);
    printf("%lf", doble);
    return 0;
}