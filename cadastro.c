//Sínsese
//Objetivo: "Um código para cadastros"
//Entrada: "Dados das pessoas"
//Saída: ""

#include<stdio.h>
#include<locale.h>
#include<string.h>

typedef struct endereco{
	char cep[8], rua[20], estado[20], bairro[20], cidade[20];
	int casa;
}endereco;

typedef struct cadastroX{
	char nome[30], cpf[12], rg[10];
	char sexo[15], telefone[11], estadoCivil[15];
	int idade;
	double salario;
	endereco end;
}cadastroX;

void preencherCadastro (cadastroX *cadastro, int i) {
	for(i=0;i<2;i++){
		printf("***CADASTRO***\n");
		printf("    DADOS:\n");
		printf("Nome: ");
		fgets(cadastro[i].nome, 30, stdin);
		printf("CPF: ");
		gets(cadastro[i].cpf);
		printf("RG: ");
		gets(cadastro[i].rg);
		printf("Idade: ");
		scanf("%d", &cadastro[i].idade);
		fflush(stdin);
		printf("Sexo: ");
		gets(cadastro[i].sexo);
		printf("Salário: ");
		scanf("%lf", &cadastro[i].salario);
		fflush(stdin);
		printf("Telefone: ");
		fgets(cadastro[i].telefone, 11, stdin);
		fflush(stdin);
		printf("Estado Civil: ");
		gets(cadastro[i].estadoCivil);
		printf("    ENDEREÇO: \nCEP: ");
		fgets(cadastro[i].end.cep, 8, stdin);
		fflush(stdin);
		printf("Rua: ");
		fgets(cadastro[i].end.rua, 20, stdin);
		printf("Casa: ");
		scanf("%d", &cadastro[i].end.casa);
		fflush(stdin);
		printf("Bairro: ");
		fgets(cadastro[i].end.bairro, 20, stdin);
		fflush(stdin);
		printf("Cidade: ");
		fgets(cadastro[i].end.cidade, 20, stdin);
		printf("Estado: ");
		fgets(cadastro[i].end.estado, 20, stdin);
		printf("\n");
	}			
}

void mostrarForulario (cadastroX *cadastro, int i){
	for(i=0;i<2;i++){
		printf("\n***CADASTRO FINALIZADO***\n\n");
		printf("Nome: %s", cadastro[i].nome);
		printf("CPF: %s\n", cadastro[i].cpf);
		printf("RG: %s\n", cadastro[i].rg);
		printf("Idade: %d anos\n", cadastro[i].idade);
		printf("Sexo: %s\n", cadastro[i].sexo);
		printf("Salário: R$ %.2lf\n", cadastro[i].salario);
		printf("Estado Civil: %s\n", cadastro[i].estadoCivil);
		printf("Telefone: %s", cadastro[i].telefone);
		printf("\n\n   ENDEREÇO: \nCEP: %s", cadastro[i].end.cep);
		printf("Rua: %sCasa: %d\n", cadastro[i].end.rua, cadastro[i].end.casa);
		printf("Bairro: %s", cadastro[i].end.bairro);
		printf("Cidade: %s", cadastro[i].end.cidade);
		printf("Estado: %s", cadastro[i].end.estado);
		printf("\n");	
	}
}

void pessoaMaisVelhaX (cadastroX *cadastro, int i, int pMV, int mIdade){
	for(i=0;i<2;i++){
		if (cadastro[i].idade>mIdade){
			mIdade = cadastro[i].idade;
			pMV = i;
		}
	}	
	printf("A pessoa mais velha é o(a): %s\n", cadastro[pMV].nome);
}

void salarioMil (cadastroX *cadastro, int i, int *sMil){	
	for(i=0;i<2;i++){
		if(cadastro[i].salario>=1000){
			sMil[i] = i;
			printf("Ganha mais de R$ 1000,00: %s", cadastro[sMil[i]].nome);
		}
	}	
}

void sexoMasculino (cadastroX *cadastro, int i, int *sMas){
	for(i=0;i<2;i++){
		if(strcmp(cadastro[i].sexo, "Masculino") == 0){
			sMas[i] = i;
			printf("É do sexo masculino: %s", cadastro[sMas[i]].nome);
		}
	}	
}

int main(){
	int i, pMV=0, sMil[2]={0}, mIdade=0, sMas[2]={0};
	cadastroX cadastro[2];
	
	setlocale(LC_ALL, "");
	
	preencherCadastro(cadastro, i);
	mostrarForulario(cadastro, i);
	pessoaMaisVelhaX(cadastro, i, pMV, mIdade);
	salarioMil (cadastro, i, sMil);
	sexoMasculino (cadastro, i, sMas);
}
