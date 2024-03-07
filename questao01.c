#include <stdio.h>
#include <stdlib.h>

int main () {
    int INDICE = 13, SOMA = 0, K = 0;

    //O loop continuará executando até que K seja igual ou maior que INDICE
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
        /*
        Como essa iteração ocorre dentro do loop:
        K = 0, SOMA = 0 + 1 = 1
        K = 1, SOMA = 1 + 2 = 3
        K = 2, SOMA = 3 + 3 = 6
        K = 3, SOMA = 6 + 4 = 10
        K = 4, SOMA = 10 + 5 = 15
        K = 5, SOMA = 15 + 6 = 21
        K = 6, SOMA = 21 + 7 = 28
        K = 7, SOMA = 28 + 8 = 36
        K = 8, SOMA = 36 + 9 = 45
        K = 9, SOMA = 45 + 10 = 55
        K = 10, SOMA = 55 + 11 = 66
        K = 11, SOMA = 66 + 12 = 78
        K = 12, SOMA = 78 + 13 = 91
        O loop é interrompido quando K é igual a 13
        */
    }

    //Resposta: O valor da variável SOMA é 91
    printf("%i", SOMA);

    return 0;
}