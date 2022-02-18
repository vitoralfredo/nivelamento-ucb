//Síntese
//Objetivo: ""
//Entrada: ""
//Saída: ""

#include<stdio.h>

float calcularMedia(int i, float altura[i], float soma, float media){
	
	soma += altura[i];
	media = soma / i;
	
	return media;
}

void mostrarAltura(int i, float altura[i], float media) {
	for(i=1;i<6;i++)	
		printf("Altura %i: %.2f\n", i, altura[i]);
		
	printf("\n\nMedia Aritimetica: %.2f", media);
	
}

int main(){
	
	float altura[5], media, soma;
	int i;
	
	for(i=1;i<6;i++){
		printf("Digite a sua altura: ");
		scanf("%f", &altura[i]);
	}
	calcularMedia(i,altura, soma, media);
	mostrarAltura(i, altura, media);	
}
