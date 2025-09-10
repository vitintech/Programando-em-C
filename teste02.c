#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[80];
    int tamanho;

    printf("Digite seu nome completo: ");
    fgets(nome, 80, stdin);
    tamanho = strlen(nome);

    printf("\n O nome: %s tem %d caracteres \n", nome, tamanho);
system("pause");
return 0;
}
