//Síntese
//Objetivo: "Cadastrar animais com vetor e struct"
//Entrada: "nome, raça, cor e peso"
//Saída: "nome, raça, cor e peso"

#include<stdio.h>

typedef struct pet {
	char nome[10], raca[10], cor[10];
	float peso;
	
}pet;

void preencherDog(pet *dog, int i){
	//int i;
	
	for(i=0;i<2;i++){		
		printf("*****DOG*****\n");
		printf("Digite o nome: ");
		fgets(dog[i].nome, 10, stdin);
		fflush(stdin);
		printf("Digite o raca: ");
		fgets(dog[i].raca, 10, stdin);
		fflush(stdin);
		printf("Digite o cor: ");
		fgets(dog[i].cor, 10, stdin);
		fflush(stdin);
		printf("Digite o peso: ");
		scanf("%f", &dog[i].peso);
		fflush(stdin);
	}
}

void preencherCat(pet *cat, int i){
	//int i;
	
	for(i=0;i<2;i++){
		printf("\n*****CAT*****\n");
		printf("Digite o nome: ");
		fgets(cat[i].nome, 10, stdin);
		fflush(stdin);
		printf("Digite o raca: ");
		fgets(cat[i].raca, 10, stdin);
		fflush(stdin);
		printf("Digite o cor: ");
		fgets(cat[i].cor, 10, stdin);
		fflush(stdin);
		printf("Digite o peso: ");
		scanf("%f", &cat[i].peso);
		fflush(stdin);	
	}		
}

void imprimirAnimais (pet *dog, pet *cat, int i){

	
	for(i=0;i<2;i++){
		printf("\n*****DOG*****\n");
		printf("%s %s %s %.1f\n", dog[i].nome, dog[i].raca, dog[i].cor, dog[i].peso);
		
		printf("\n*****CAT*****\n");
		printf("%s %s %s %.1f\n", cat[i].nome, cat[i].raca, cat[i].cor, cat[i].peso);
	}	
}

int main (){	
	int i;
	pet dog[2], cat[2];
	
	preencherDog(dog, i);
	preencherCat(cat, i);
	imprimirAnimais(dog, cat, i);	
}
