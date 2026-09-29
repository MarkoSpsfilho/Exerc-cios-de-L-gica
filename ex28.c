#include <stdio.h>

int main() {
    int i;
    float n, maior;
    printf("Numero 1: ");
    scanf("%f", &maior);
    for (i = 2; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%f", &n);
        if (n > maior)
            maior = n;
    }
    printf("Maior numero: %.2f\n", maior);
    return 0;
}
