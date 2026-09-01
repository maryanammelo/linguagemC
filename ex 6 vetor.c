#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int  pares[20], impares[20];
    int i, ipar = 0, iimpar = 0; 
    
    
    for(i=0; i<20; i++){
       
        if(a[i]%2 == 0){
        pares[ipar]=a[i];
        ipar++;
    } 
    
    else {
        impares[iimpar] = a[i];
        iimpar++;
    }
}
   printf("Números pares:\n");
   for (i=0; i < ipar; i++){
       printf("%d ", pares[i]);
   }
   printf("\n");
   
   printf("Números impares:\n");
   for (i=0; i < iimpar; i++){
       printf("%d ", impares[i]);
   }
   printf("\n");


    return 0;
}
