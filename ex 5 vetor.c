#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int v[8] = {1,2,3,4,5,6,7,8};
    int i;
    
    printf("Valores do vetor em ordem decrescente:\n");
    
    for(i=7; i>=0; i--){
        
        printf("%d ", v[i]);
        
   }

    return 0;
}
