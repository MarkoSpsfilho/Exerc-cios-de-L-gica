#include <stdio.h>

int main() {
    float saldo = 1000, valor;
    int opcao = 0;
    while (opcao != 4) {
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Saldo: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Valor do deposito: ");
            scanf("%f", &valor);
            saldo = saldo + valor;
        } else if (opcao == 3) {
            printf("Valor do saque: ");
            scanf("%f", &valor);
            if (valor <= saldo)
                saldo = saldo - valor;
            else
                printf("Saldo insuficiente\n");
        } else if (opcao != 4) {
            printf("Opcao invalida\n");
        }
    }
    return 0;
}
