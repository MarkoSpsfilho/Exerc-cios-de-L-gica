#include <stdio.h>

int main() {
    int entrada, saida, horas;
    float total;
    printf("Hora de entrada: ");
    scanf("%d", &entrada);
    printf("Hora de saida: ");
    scanf("%d", &saida);
    horas = saida - entrada;
    if (horas <= 1)
        total = 10;
    else
        total = 10 + (horas - 1) * 5;
    printf("Tempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", total);
    return 0;
}
