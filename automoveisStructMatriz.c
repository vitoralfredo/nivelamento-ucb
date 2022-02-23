#include<stdio.h>

typedef struct automovel {
	char marca[10], cor[10], modelo[10];
	double motor, preco; 
	int ano;
}automovel;

void preencherMatriz(automovel a1[][3], int i, int j){
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nDigite a marca: ");
			scanf("%s", &a1[i][j].marca);
			printf("Digite a cor: ");
			scanf("%s", &a1[i][j].cor);
			printf("Digite o modelo: ");
			scanf("%s", &a1[i][j].modelo);
			printf("Digite o motor: ");
			scanf("%lf", &a1[i][j].motor);
			printf("Digite o preco: ");
			scanf("%lf", &a1[i][j].preco);
			printf("Digite o ano: ");
			scanf("%d", &a1[i][j].ano);		
		}
	}	
}

void imprimirMatriz(automovel a1[][3], int i, int j){
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t", a1[i][j].marca);
		}
		printf("\n");
	}		
}

int main (){	
	int i, j;
	automovel a1[2][3];	
	
	preencherMatriz(a1, i, j);	

}
