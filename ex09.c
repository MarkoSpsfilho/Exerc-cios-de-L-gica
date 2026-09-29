#include <stdio.h>

int main() {
    float km, litros;
    printf("Distancia (km): ");
    scanf("%f", &km);
    printf("Combustivel (litros): ");
    scanf("%f", &litros);
    if (litros > 0)
        printf("Consumo medio: %.2f km/L\n", km / litros);
    else
        printf("Quantidade de combustivel invalida\n");
    return 0;
}
