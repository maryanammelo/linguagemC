#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    float r1, r2, r3, i, u, req;
    
    printf("Digite um valor para a resistencia eletrica 1:\n");
    scanf("%f", &r1);
    
    printf("Digite um valor para a resistencia eletrica 2: \n");
    scanf("%f", &r2);
    
    printf("Digite um valor para a resistencia eletrica 3: \n");
    scanf("%f", &r3);
    
    printf("Digite um valor para a tensão eletrica:\n");
    scanf("%f", &u);
    
    req = (r1*r2*r3)/(r1*r2+r2*r3+r1*r3);
    i = u/req;
    
    printf("\t O vlaor da resistencia equivalente é de:%f \n", req);
    printf("\t O valor da corrente eletrica é de: %f \n", i);
    
    getchar();
    return 0;
}
