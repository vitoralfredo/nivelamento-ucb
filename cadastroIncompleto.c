#include<stdio.h>

typedef struct endereco{
	char cep[8];
}endereco;

typedef struct cad{
	char nome[30];
	int idade;
	double salario;
	endereco end;
}cad;

void preencherCadastro(cad *cadastro, int i) {
	for(i=0;i<2;i++){
		printf("\nNome: ");
		fgets(cadastro[i].nome, 30, stdin);
		fflush(stdin);
		printf("CEP: ");
		scanf("%s", &cadastro[i].end.cep);
		fflush(stdin);
		printf("Salario: ");
		scanf("%lf", &cadastro[i].salario);
		fflush(stdin);
		printf("Idade: ");
		scanf("%d", &cadastro[i].idade);
		fflush(stdin);	
	}
}

void mostrarForulario(cad *cadastro, int i){
	for(i=0;i<2;i++){
		printf("\n\nNome: %s", cadastro[i].nome);
		printf("CEP: %s\n", cadastro[i].end.cep);
		printf("Salario: %.2lf\n", cadastro[i].salario);
		printf("Idade: %d\n", cadastro[i].idade);
	}
}

int main(){
	int i;
	cad cadastro[2];
	
	preencherCadastro(cadastro, i);
	mostrarForulario(cadastro, i);
	
}
