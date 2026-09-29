#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);
    printf("Operacao (+, -, * ou /): ");
    scanf(" %c", &op);
    if (op == '+')
        printf("Resultado: %.2f\n", a + b);
    else if (op == '-')
        printf("Resultado: %.2f\n", a - b);
    else if (op == '*')
        printf("Resultado: %.2f\n", a * b);
    else if (op == '/') {
        if (b == 0)
            printf("Erro: divisao por zero\n");
        else
            printf("Resultado: %.2f\n", a / b);
    } else
        printf("Operacao invalida\n");
    return 0;
}
