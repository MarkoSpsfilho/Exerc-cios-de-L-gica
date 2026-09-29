#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0;
    printf("Votos (1, 2 ou 3). Digite 0 para encerrar.\n");
    printf("Voto: ");
    scanf("%d", &voto);
    while (voto != 0) {
        if (voto == 1)
            c1++;
        else if (voto == 2)
            c2++;
        else if (voto == 3)
            c3++;
        else
            printf("Voto invalido\n");
        printf("Voto: ");
        scanf("%d", &voto);
    }
    printf("Candidato 1: %d\n", c1);
    printf("Candidato 2: %d\n", c2);
    printf("Candidato 3: %d\n", c3);
    printf("Total de votos: %d\n", c1 + c2 + c3);
    if (c1 > c2 && c1 > c3)
        printf("Vencedor: Candidato 1\n");
    else if (c2 > c1 && c2 > c3)
        printf("Vencedor: Candidato 2\n");
    else if (c3 > c1 && c3 > c2)
        printf("Vencedor: Candidato 3\n");
    else
        printf("Empate\n");
    return 0;
}
