#include<stdio.h>

struct aluno{
	char nome[30], cpf[11], rg[10];
	int idade;
	float altura, peso;
};

void mostrarForulario(struct aluno aluno1){
	printf("\n\nNome: %s", aluno1.nome);
	printf("CPF: %s\n", aluno1.cpf);
	printf("RG: %s\n", aluno1.rg);
	printf("Idade: %d\n", aluno1.idade);
	printf("Altura: %.2f\n", aluno1.altura);
	printf("Peso: %.1f\n", aluno1.peso);
}

int main(){
	
	struct aluno aluno1;
	
	printf("Nome: ");
	fgets(aluno1.nome, 30, stdin);
	printf("CPF: ");
	scanf("%s", &aluno1.cpf);
	printf("RG: ");
	scanf("%s", &aluno1.rg);
	printf("Idade: ");
	scanf("%d", &aluno1.idade);
	printf("Altura: ");
	scanf("%f", &aluno1.altura);
	printf("Peso: ");
	scanf("%f", &aluno1.peso);
	
	mostrarForulario(aluno1);
	
}
