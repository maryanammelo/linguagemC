#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float area, lado;
	
	printf("Digite um numero para o lado do triangulo equilatero: \n ");
	scanf("%f", lado);
	
	area= lado * lado * sqrt(3) / 4;
	
	printf("\t A area desse triangulo equilatero é de: \n ");
	
	getchar();
	return 0;
}
