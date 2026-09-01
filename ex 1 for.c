#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

int i, res, num;

printf("Digite um numero para mostrar sua tabuada: \n");
scanf("%d", &num);

for(i=0; i>=0 &&i<=10; i++){
    
    res = num*i;
    printf("%d x %d = %d \n", num, i, res);
}
    return 0;
}
