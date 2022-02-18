//Síntese
//Objetivo: "Calcular a media de quatro notas"
//Entrada: "quatro notas"
//Saída: "media e status"

#include<stdio.h>

int main(){
	
	float n1, n2, n3, n4, media, nE, mF;
	
	printf("Digite suas quatro notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
	
	printf("Media: %.1f\n", media);
	
	if (media >= 7)
		printf("Aluno aprovado");
	else{
		if (media < 5 )
			printf("Aluno reprovado");
		else{
			if(media >= 5 && media < 7) {
				printf("Aluno em exame\n");
				printf("Nota do exame: ");
				scanf("%f", &nE);
				
				mF = (media + nE)/2;
				
				if (mF >= 5)
					printf("Aluno aprovado\n");
				else 
				    printf("Aluno reprovado\n");
								
				printf("Media final: %.1f", mF);			
			}
		}
	}		
	return 0;
}
