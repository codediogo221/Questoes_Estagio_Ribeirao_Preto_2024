#include <stdio.h>
#include <stdlib.h>

//Função que verifica se um número pertence à sequência de Fibonacci
int verificaFibonacci(int num) {
    int a = 0, b = 1, c;

    //Loop que percorre a sequência de Fibonacci até encontrar um número maior ou igual a 'num'
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
        /*Como essa iteração ocorre usando o número 8 como exemplo:
        b é menor que 8, então o loop inicia

        Primeira iteração:
        c = a + b = 1
        a = b = 1
        b = c = 1

        Segunda iteração:
        b ainda é menor que 8, o loop continua
        c = a + b = 2
        a = b = 1
        b = c = 2

        Terceira iteração:
        b ainda é menor que 8, o loop continua
        c = a + b = 3
        a = b = 2
        b = c = 3

        Quarta iteração:
        b ainda é menor que 8, o loop continua
        c = a + b = 5
        a = b = 3
        b = c = 5

        Quinta iteração:
        b ainda é menor que 8, o loop continua
        c = a + b = 8
        a = b = 5
        b = c = 8

        Sexta iteração:
        Agora, b é igual a 8, o loop termina
        */   
    }

    //Se o último número da sequência for igual a 'num', então 'num' pertence à sequência de Fibonacci
    if (b == num)
        return 1; //True
    else
        return 0; //False
}

int main() {
    int numero;

    //Solicita ao usuário um número
    printf("Digite um numero: ");
    scanf("%i", &numero);

    //Chama a função para verificar se o número inserido pertence à sequência de Fibonacci
    if (verificaFibonacci(numero))
        printf("%i pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("%i nao pertence a sequencia de Fibonacci.\n", numero);
    
    return 0;
}