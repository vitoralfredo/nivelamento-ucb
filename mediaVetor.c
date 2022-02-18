//Síntese
//Objetivo: "Calcular a media de quatro notas com vetor"
//Entrada: "quatro notas"
//Saída: "media e status: aprovado, reprovado ou em exame"

#include<stdio.h>

int main(){
	
	double n1[3], n2[3], n3[3], n4[3], media[3], nE[3], mF[3];
	char nome[3][30];
	int i;
	
	for(i=0;i<3;i++){ //preencheu os vetores e calculou a media
		printf("Digite seu nome: ");
		fflush(stdin);
		fgets(nome[i], 30, stdin);
		printf("Digite suas quatro notas: ");
		scanf ("%lf %lf %lf %lf", &n1[i], &n2[i], &n3[i], &n4[i]);
		
		media[i] = ((n1[i]*2) + (n2[i]*3) + (n3[i]*4) + (n4[i]*1))/10;
	}	
	printf("\nNome\t\tNota1\tNota2\tNota3\tNota4\tMedia\tResultado\n\n");
		
	for(i=0;i<3;i++){ //mostrar os resultados
		if (media[i] >= 7)
			printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tAprovado.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);
		else{
			if (media[i] < 5)
				printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tReprovado.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);
			else {				
				if (media[i] >= 5 && media[i] < 7)
					printf("%s\t\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\tExame Final.\n", nome[i], n1[i], n2[i], n3[i], n4[i], media[i]);
			}
		}
	}
	for(i=0;i<3;i++){ //caso o aluno esteja em exame final
		if (media[i] >= 5 && media[i] < 7){
			printf("\nNome: %s", nome[i]);
			printf("Nota do exame final: ");
			fflush(stdin);
			scanf("%lf", &nE[i]);
				
			mF[i] = (media[i] + nE[i])/2;
			
			printf("Media final: %.1lf\n", mF[i]);
				
			if (mF[i] >= 5)
				printf("Aprovado.\n");
			else 
				printf("Reprovado.\n");
		}
	}
	return 0;
}
