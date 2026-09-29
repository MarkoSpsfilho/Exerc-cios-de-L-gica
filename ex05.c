#include <stdio.h>

int main() {
    float base, altura;
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Area: %.2f\n", base * altura);
    return 0;
}
