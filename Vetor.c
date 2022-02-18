//Síntese
//Objetivo: ""
//Entrada: ""
//Saída: ""

#include<stdio.h>

int main(){
	
	int n1[5], n2[5], m[5], i;
	
	for(i=0;i<5;i++){
		printf("Digite sua primeira nota: ");
		scanf("%d", &n1[i]);
		printf("Digite sua segunda nota.: ");
		scanf("%d", &n2[i]);
		
		m[i] = (n1[i] + n2[i]) /2;
	}
	for(i=0;i<5;i++)
		printf("Vetor[%d] = %d\t ", i, m[i] );
		
	return 0;
}
