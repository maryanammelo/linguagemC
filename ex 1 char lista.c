#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   char nome[20];
   int contador;
    
   printf("Digite seu primeiro nome: \n");
   fgets(nome,20,stdin); //gets(nome)- sem limitação / fgets- com limitação
   fflush(stdin);//limpar o buffer de entrada 
   
   contador = strlen(nome);
   
   printf("%d", contador);
   
    return 0;
}
