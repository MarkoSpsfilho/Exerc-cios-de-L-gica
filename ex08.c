#include <stdio.h>

int main() {
    float horas, valorHora, salario;
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Valor por hora: ");
    scanf("%f", &valorHora);
    salario = horas * valorHora;
    printf("Salario bruto: R$ %.2f\n", salario);
    return 0;
}
