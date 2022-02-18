//Síntese
//Objetivo: "calcular forma de bhaskara"
//Entrada: "valores"
//Saída: "valor de X; delta =! negativo; a =! 0"

#include<stdio.h> //bliblioteca para o printf e scanf
#include<math.h> //bliblioteca para funções matemáticas

int main () {
	double x1, x2, a, b, c, delta;
	char repet;

	do {
		printf("Digite os valores de a, b, c: ");
		scanf("%lf %lf %lf", &a, &b, &c);
	
		delta = pow(b,2) - 4 * a * c;
	
		if (a == 0)
			printf("Impossivel calcular, pois A = %.1lf", a);
		else {
		    if (delta < 0)
		    	printf("Impossivel calcular, pois Delta = %.1lf", delta);
			else {
				x1 = (-(b) + sqrt(delta))/(2*a);
				x2 = (-(b) - sqrt(delta))/(2*a);
				printf("X1 = %.3lf e X2 = %.1lf\n", x1, x2);		
			}	
		}		
		printf("Deseja repetir a operação: ");
		scanf(" %c", &repet)
		
	} while(repet == 's');
		
	return 0;
}
