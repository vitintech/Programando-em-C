#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca das strings

int main(){

// variaveis
    char nome[80];
    int tamanho;

// entrada dos dados
    printf("Digite seu nome completo: ");
    fgets(nome, 80, stdin);
    tamanho = strlen(nome);

// saida dos dados
    printf("\n O nome: %s tem %d caracteres \n", nome, tamanho);
system("pause");
return 0;
}
