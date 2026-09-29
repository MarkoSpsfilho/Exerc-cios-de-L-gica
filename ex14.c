#include <stdio.h>

int main() {
    float a, b;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);
    if (a > b)
        printf("Maior: %.2f\n", a);
    else
        printf("Maior: %.2f\n", b);
    return 0;
}
