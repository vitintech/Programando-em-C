#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome_completo[80];
    int i;

    printf("Seu nome completo: \n");
    fgets(nome_completo, 80, stdin);

    for(i = 0; i <= strlen(nome_completo) -1; i++){
        printf("%c \n", nome_completo[i]);
    }
system("pause");
system("cls");

    printf("Usando while \n");
    i = 0;
    while (nome_completo[i] != '\0')
    {
          printf("%c \n", nome_completo[i]);
          i++;
    }
system("pause");
return 0;
}