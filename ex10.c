#include <stdio.h>

int main() {
    char produto[100];
    int quantidade;
    float preco;
    printf("Produto: ");
    scanf(" %99[^\n]", produto);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Preco unitario: ");
    scanf("%f", &preco);
    printf("Produto: %s\n", produto);
    printf("Total da compra: R$ %.2f\n", quantidade * preco);
    return 0;
}
