#include <stdio.h>

int main() {
    char nome[100];
    printf("Nome: ");
    scanf(" %99[^\n]", nome);
    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);
    return 0;
}
