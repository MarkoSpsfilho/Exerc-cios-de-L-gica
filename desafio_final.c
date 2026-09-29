#include <stdio.h>

int main() {
    char produto[100];
    int quantidade, minimo, continuar = 1;
    while (continuar == 1) {
        printf("Produto: ");
        scanf(" %99[^\n]", produto);
        printf("Quantidade em estoque: ");
        scanf("%d", &quantidade);
        printf("Estoque minimo: ");
        scanf("%d", &minimo);
        if (quantidade < minimo)
            printf("%s: repor estoque\n", produto);
        else
            printf("%s: estoque adequado\n", produto);
        printf("Verificar outro produto? (1 = sim, 0 = nao): ");
        scanf("%d", &continuar);
    }
    return 0;
}
