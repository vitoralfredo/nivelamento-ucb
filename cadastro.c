#include<stdio.h>

typedef struct endereco{
	char cep[8], rua[10], estado[20], bairro[20], cidade[20];
}endereco;

typedef struct cadastro{
	char nome[30], cpf[11], rg[10], telefone[11], estadoCivil[10], sexo;
	int idade;
	double salario;
	endereco end;
}cadastro;

void preencherCadastro() {
	printf("Nome: ");
	fgets(cadastro.nome, 30, stdin);
	printf("CPF: ");
	scanf("%s", &cadastro.cpf);
	printf("RG: ");
	scanf("%s", &cadastro.rg);
	printf("Idade: ");
	scanf("%d", &cadastro.idade);
	printf("Estado Civil: ");
	scanf("%f", &cadastro.altura);
	printf("Peso: ");
	scanf("%f", &cadastro.peso);
	
	
}

void mostrarForulario(cadastro *cadastro1){
	printf("\n\nNome: %s", cadastro.nome);
	printf("CPF: %s\n", cadastro.cpf);
	printf("RG: %s\n", cadastro.rg);
	printf("Idade: %d\n", cadastro.idade);
	printf("Altura: %.2f\n", cadastro.altura);
	printf("Peso: %.1f\n", cadastro.peso);
}

int main(){
	
	cadastro cadastro1[5];
	
	mostrarForulario(cadastro1);
	
}
