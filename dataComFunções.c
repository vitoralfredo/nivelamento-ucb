#include<stdio.h>


void obterMes(int dia, int mes, int ano){
	switch(mes) {
        case 1:
            printf("%i de Janeiro de %i", dia, ano);
            break;
        case 2:
            printf("%i de Fevereiro de %i", dia, ano);
            break;
        case 3:
            printf("%i de Março de %i", dia, ano);
            break;
        case 4:
            printf("%i de Abril de %i", dia, ano);
            break;
        case 5:
            printf("%i de Maio de %i", dia, ano);
           break;
		case 6: 
			printf("%i de Junho de %i", dia, ano);  
			break;
		case 7: 
			printf("%i de Julho de %i", dia, ano); 
			break;
		case 8: 
			printf("%i de Agosto de %i", dia, ano); 
			break;
		case 9: 
			printf("%i de Setembro de %i", dia, ano); 
			break;
		case 10: 
			printf("%i de Outubro de %i", dia, ano);  
			break;
		case 11: 
			printf("%i de Novembro de %i", dia, ano); 
			break;
		case 12: 
			printf("%i de Dezembro de %i", dia, ano);  
			break;		
    	default:
        	printf("DATA INEXISTENTE");
    }
}

int main(){
	
	int dia, mes, ano, data;
	
	printf("Digite uma data: ");
	scanf("%i %i %i", &dia, &mes, &ano);
	
	obterMes(dia, mes, ano);
		
}

