#include <stdio.h> //declaraçao de biblioteca
#include <stdlib.h>
#include <math.h>

int main() //função principal
{
	int id;
	char nome[50];
	float peso, alt, imc;
	
	printf("Qual o seu nome?\n");
	scanf("%[^\n]s", &nome);  //[^\n]s é para escrever nome com espaçamento 
	
	printf("Qual a sua idade?\n");
	scanf("%d", &id);

	printf("Qual o seu peso?\n");
	scanf("%f", &peso);
	
	printf("Qual a sua altura?\n");
	scanf("%f", &alt);
	
    imc= peso/pow(alt,2);

	printf("Seu IMC é de: %f", imc);
	
	if(imc<18.5){
		printf("Abaixo do peso! \n");
	}
	if(imc>=18.5 && imc<25){
		printf("Peso normal! \n");
	}
	if(imc>=25 && imc<29.9){
		printf("Sobrepeso \n");
	}
	if(imc>=30 && imc<34.9){
		printf("Obesidade grau I \n");
	}
	if(imc>=35 && imc<3.9){
		printf("Obesidade grau II \n");
	}
	if(imc>40){
		printf("Obesidade grau III \n");
	}
	
	getchar();
	return 0;

}
