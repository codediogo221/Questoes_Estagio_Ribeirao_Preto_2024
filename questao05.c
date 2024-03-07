#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função que inverte a string
void inventerString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char valor_temp;

    //Troca os caracteres da extremidade esquerda com os da direita da string
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        valor_temp = str[i];
        str[i] = str[j];
        str[j] = valor_temp;
    }
}

int main () {
    char string[150];

    //Solicita uma string
    printf("Digite uma string: ");
    scanf("%s", string);

    //Chama a função para inverter a string
    inventerString(string);

    //Exibe a string invertida
    printf("String invertida: %s\n", string);
    
    return 0;
}