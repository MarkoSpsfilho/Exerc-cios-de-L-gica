#include <stdio.h>

int main() {
    float a, b, c, maior;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);
    printf("Terceiro numero: ");
    scanf("%f", &c);
    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    printf("Maior: %.2f\n", maior);
    return 0;
}
