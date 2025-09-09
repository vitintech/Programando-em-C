#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
// variaveis
    char primeiro_nome[20];
    char sobrenome[80];

// entrada dos dados
    printf("Qual seu primeiro nome: ");
    fgets(primeiro_nome, 20, stdin);
    primeiro_nome[strcspn(primeiro_nome, "\n")] = '\0';

    printf("Qual seu sobrenome: ");
    fgets(sobrenome, 80, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

// saida dos dados
printf("=================== \n");
    strcat(primeiro_nome, " ");
    strcat(primeiro_nome, sobrenome);
    printf("Nome Completo: %s \n", primeiro_nome);

system("pause");
return 0;
}