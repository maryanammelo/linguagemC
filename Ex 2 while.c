#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  //declarção de variáveis   
    int n, soma;
  //atribuição de valor as variáveis  
    soma = 0;
    
    printf("Digite um numero, caso 0, o programa se encerra: \n");
    scanf("%d", &n);

    //laço de repetição 
    while(n!=0){
        
        soma = soma + n;
        printf("Digite um numero, caso 0, o programa se encerra: \n");
        scanf("%d", &n);
        
    }
    printf("%d", soma);
    
    return 0;
}
