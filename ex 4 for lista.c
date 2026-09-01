#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    
int num, i, fatorial=1;

printf("Digite um numero para que seja fornecido seu fatorial: \n");
scanf("%d", &num);

if (num<0){
    printf("Não é possível calcular o fatorial com esse numero :( \n");
}else{

    for(i=1; i<=num ; i++){
        
        fatorial = fatorial * i; // fatorial *= i
    
    }
   printf("Fatorial de %d e %d \n", num, fatorial);
     
}   
    return 0;
}
