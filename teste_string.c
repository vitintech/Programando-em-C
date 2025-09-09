#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca das strings

int main(){

// variaveis
    char nome[50];

    printf("Qual seu nome completo? \n");
    fgets(nome, 50, stdin);
// fgets(nome, 50, stdin)

// saida de dados
printf("\n COPIA DO NOME: \n");
    printf("%s \n", nome);
system("pause");
return 0;
}