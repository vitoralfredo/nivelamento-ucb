//Síntese
//Objetivo: "Imprimir a diagonal princi"
//Entrada: ""
//Saída: ""

#include<stdio.h>

int main(){	

	int matriz[12][12], i, j, soma=0;
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			matriz[i][j] = i*j;
		}
	}	
	for(i=0;i<12;i++){
			for(j=0;j<12;j++){
				if(i<j)
					soma += matriz[i][j];
			}
	}
	printf("Total: %d", soma);
				
	return 0;	
}
