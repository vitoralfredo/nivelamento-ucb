#include<stdio.h>
#include<locale.h>

void fInflacao (float produto){
	printf("Digite o valor do produto sem infla��o: R$ ");
	scanf("%f", &produto);
	
	if(produto >= 100)
		produto *= 1.20;
	else
		produto *= 1.10;
	
	printf("Valor do produto com infla��o: R$ %.2f", produto);		
}

void fExpressao (int valor1, int valor2, char operador){

	printf("Digite o primeiro valor da express�o: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor da express�o: ");
	scanf("%d", &valor2);				
	printf("Digite o operador da express�o: +, -, * ou /: ");
	scanf(" %c", &operador);		
	printf("%d %c %d = ?", valor1, operador, valor2);
}

void fMedia (float nota1, float nota2, float media){	
	do{	
		printf("Digite a nota da primeira prova: ");
		scanf("%f", &nota1);
		
		if(nota1 != 50){
			printf("Digite a nota da segunta prova: ");
			scanf("%f", &nota2);
			
			media = (nota1 + nota2)/2;
			
			printf("A sua m�dia foi: %.2f\n", media);	
		}	
	}while(nota1 != 50);
}

void fOpcoesDePagamento (){
	float compras;
	int pagamento, parcelas, i;
	
	printf("Digite o valor gasto na loja: R$ ");
	scanf("%f", &compras);
	printf("Metodos de pagamentos:\n");
	printf("\tOp��o1: a vista com 10 porcento de desconto\n");
	printf("\tOp��o2: em duas vezes (pre�o da etiqueta)\n");
	
	if(compras > 100) 
		printf("\tOp��o3: em 3 at� 10 vezes com 3 porcento de juros\n");
	
	printf("\nAgora escolha o metodo de pagamento: ");
	scanf("%d", &pagamento);
	 
	if (pagamento == 1){
		compras -= (compras * 0.10);
		printf("Valor total a pagar: %.2f", compras);
	}
	else{
		if(pagamento == 2){
			compras /= 2;
			printf("Parcela 1: %.2f\tParcela 2: %.2f", compras, compras);
		}
	}
	if (pagamento == 3){
		printf("Digite a quantidade de parcelas desejadas: ");
		scanf("%d", &parcelas);
		
		for(i=0;i>parcelas;i++)
			compras *= 1.03;
	}
}

int main (){
	float produto, nota1, nota2, media;
	int funcao, valor1, valor2;
	char operador;
	
	setlocale(LC_ALL, "");
	
	printf("Digite o n�mero que corresponde a fun��o: ");
	scanf("%d", &funcao);
	printf("\n");
	
	if(funcao == 1)
		fInflacao(produto);
	else{
		if (funcao == 2)
			fExpressao (valor1, valor2, operador);
		else{
			if (funcao == 3)
				fMedia (nota1, nota2, media);
			else{
				if (funcao == 4)
					fOpcoesDePagamento ();
			}
		}
	}
}
