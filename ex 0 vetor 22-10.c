#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float peso[5];
    int i; 
    
    //receber os valores do vetor peso
    
    for(i=0; i<5; i++){
        printf("Qual o peso da mercadoria %d: \n", i+1);
        scanf("%d", &peso[i]);
    }
    //mostrar o vetor completo
    
    for(i=0; i<5; i++){
        printf("%.2f", peso[i]);
    }


    return 0;
}
