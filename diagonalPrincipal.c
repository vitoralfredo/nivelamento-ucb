//Síntese
//Objetivo: "Imprimir a diagonal principal"
//Entrada: ""
//Saída: "diagonal principal"

#include<stdio.h>

int main(){	
	int matriz[12][12], i, j;
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			matriz[i][j] = i * j;
		}
	}		
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){					
			if(i==j)
				printf("%d\t", matriz[i][j]);
			else {		
				matriz[i][j] = 888;
				printf("%d\t", matriz[i][j]);
			}
		}
	    printf("\t\n");
	}			
	return 0;	
}
