#include <stdio.h>

int main() {
    float n;
    printf("Numero: ");
    scanf("%f", &n);
    if (n > 0)
        printf("Positivo\n");
    else if (n < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");
    return 0;
}
