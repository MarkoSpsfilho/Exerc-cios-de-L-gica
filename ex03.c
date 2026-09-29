#include <stdio.h>

int main() {
    float a, b;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);
    printf("Soma: %.2f\n", a + b);
    printf("Subtracao: %.2f\n", a - b);
    printf("Multiplicacao: %.2f\n", a * b);
    if (b != 0)
        printf("Divisao: %.2f\n", a / b);
    else
        printf("Divisao: impossivel dividir por zero\n");
    return 0;
}
