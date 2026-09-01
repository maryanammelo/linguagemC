#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float l1,l2,l3;
    
    printf("Digite o lado 1 \n");
    scanf("%f", &l1);
    
    printf("Digite o lado 2 \n");
    scanf("%f", &l2);
    
    printf("Digite o lado 3 \n");
    scanf("%f", &l3);
    
    if((l1+l2>l3) && (l2+l3>l1) && (l1+l3>l2)){
        if (l1==l2 && l2==l3){
        printf("Equilatero \n");
        }
    
        else if(l1==l2 || l2==l3 || l3==l1){
         printf("Isosceles\n"); 
         
        }
        else{
            printf("Escaleno \n");
        }
    }
    else{
        printf("Nao e triangulo \n");
    }
    
    
    getchar();
    return 0;
}
