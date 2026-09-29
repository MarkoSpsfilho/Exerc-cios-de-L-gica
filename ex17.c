#include <stdio.h>

int main() {
    float valor, percentual, desconto, final;
    printf("Valor da compra: ");
    scanf("%f", &valor);
    if (valor <= 100)
        percentual = 0;
    else if (valor <= 500)
        percentual = 5;
    else
        percentual = 10;
    desconto = valor * percentual / 100;
    final = valor - desconto;
    printf("Valor original: R$ %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final);
    return 0;
}
