#include <stdio.h>

int main() {
    int senha;
    printf("Senha: ");
    scanf("%d", &senha);
    while (senha != 1234) {
        printf("Senha incorreta. Tente novamente.\n");
        printf("Senha: ");
        scanf("%d", &senha);
    }
    printf("Acesso autorizado.\n");
    return 0;
}
