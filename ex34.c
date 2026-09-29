#include <stdio.h>

int main() {
    char produto[100];
    int quantidade, totalProdutos = 0, vendas = 0, continuar = 1;
    float preco, total, faturamento = 0, maior = 0;
    while (continuar == 1) {
        printf("Produto: ");
        scanf(" %99[^\n]", produto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: ");
        scanf("%f", &preco);
        total = quantidade * preco;
        printf("Total da venda: R$ %.2f\n", total);
        vendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + total;
        if (total > maior)
            maior = total;
        printf("Registrar outra venda? (1 = sim, 0 = nao): ");
        scanf("%d", &continuar);
    }
    printf("Vendas realizadas: %d\n", vendas);
    printf("Produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", maior);
    return 0;
}
