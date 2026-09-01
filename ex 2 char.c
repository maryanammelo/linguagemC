#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   char nome[20];
    
   printf("Digite o seu nome completo: \n");
   fgets(nome,20,stdin); //gets(nome)- sem limitação / fgets- com limitação 
   fflush(stdin);//limpar o buffer de entrada 
   
   printf("O seu nome completo e: %s", nome);

    return 0;
}
