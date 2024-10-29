#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   char nome[20];
   char sobrenome[10];
    
   printf("Digite seu primeiro nome: \n");
   fgets(nome,20,stdin); //gets(nome)- sem limitação / fgets- com limitação
   fflush(stdin);//limpar o buffer de entrada 
   
   printf("Digite sua sobrenome:\n");
   fgets(sobrenome,10,stdin);
   fflush(stdin);
  
   strcat(nome,sobrenome);
   
   puts(nome);
   
    return 0;
}
