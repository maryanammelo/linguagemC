#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   char nome[20];
   char matricula[10];
    
   printf("Digite seu nome completo: \n");
   fgets(nome,20,stdin); //gets(nome)- sem limitação / fgets- com limitação
   fflush(stdin);//limpar o buffer de entrada 
   
   printf("Digite sua matricula:\n");
   fgets(matricula,10,stdin);
   fflush(stdin);
  
   puts(nome);
   puts(matricula);
    return 0;
}
