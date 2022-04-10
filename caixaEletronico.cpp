#include<stdlib.h>
#include<stdio.h>

int main() {

    int saque;
    int resto50,resto20,resto10;
    int nota50,nota20,nota10;

    do {
        printf("Digite o valor pra saque: ");
        scanf("%d",&saque);
        if (saque % 5 == 0 && saque <= 1000) {
            nota50 = saque / 50;
            resto50 = saque % 50;
            nota20 = resto50 / 20;
            resto20 = resto50 % 20;
            nota10 = resto20 / 10;
            resto10 = resto20 % 10;
        }
        else
            printf("voce digitou um valor de saque nao permitido. Tente novamente.\n");
    }
    while (saque % 10 != 0 || saque > 1000);

    printf("%d notas de 50\n",nota50);
    printf("%d notas de 20\n",nota20);
    printf("%d notas de 10\n",nota10);

    return 0;
}
