#include <stdio.h>

int main() {
    char nome[100];
    int qtd, i, aprovados = 0, recuperacao = 0, reprovados = 0;
    float n1, n2, media, soma = 0, maior, menor;
    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);
    for (i = 1; i <= qtd; i++) {
        printf("Nome do aluno %d: ", i);
        scanf(" %99[^\n]", nome);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        soma = soma + media;
        if (i == 1) {
            maior = media;
            menor = media;
        }
        if (media > maior)
            maior = media;
        if (media < menor)
            menor = media;
        if (media >= 7) {
            printf("%s: Aprovado\n", nome);
            aprovados++;
        } else if (media >= 5) {
            printf("%s: Recuperacao\n", nome);
            recuperacao++;
        } else {
            printf("%s: Reprovado\n", nome);
            reprovados++;
        }
    }
    if (qtd > 0) {
        printf("Quantidade de alunos: %d\n", qtd);
        printf("Aprovados: %d\n", aprovados);
        printf("Recuperacao: %d\n", recuperacao);
        printf("Reprovados: %d\n", reprovados);
        printf("Media geral: %.2f\n", soma / qtd);
        printf("Maior media: %.2f\n", maior);
        printf("Menor media: %.2f\n", menor);
    }
    return 0;
}
