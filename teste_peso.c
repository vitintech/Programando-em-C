#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// esta com erro na repeticao dos lotes e finalizacao do lote

int main(){
	
	int lot, t_peso_lotes;
	float peso, t_peso;
	setlocale(LC_ALL, "Portuguese");
	
	for(lot=1; lot <= 3; lot++){
	    	printf("\n ----- INSPECAO DE LOTE %d ----- \n", lot);
	    	printf("Digite o peso da peca (ou 0 para finalizar): ");
	    	scanf("%f", &peso);

	    while (peso != 0){
	    t_peso = t_peso + peso;
	    printf("Digite o peso da peca (ou 0 para finalizar): ");
	    scanf("%f", &peso);
}

        printf("Total do peso do lote: %2.f",t_peso);
        t_peso = 0;
}
        t_peso_lotes = 0;
        t_peso_lotes = t_peso + peso;
		printf("\n Total dos pesos dos 3 lotes: %f", t_peso_lotes);

system("pause");
return 0;
}