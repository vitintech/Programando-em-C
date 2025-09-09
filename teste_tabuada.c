#include <stdio.h>
#include <stdlib.h>

int main(){
	int lin, col;
	
	for(lin=1; lin <= 10; lin++){ // controla qual tabuada sera impressa
		printf("\n ---- TABUADA %d ---- \n", lin);
		for(col=1; col <= 10; col++)
		    printf("%d x %d = %d \n", lin,col, lin * col);	
	}
return 0;
}

