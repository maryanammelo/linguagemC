#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int senha, versenha;
    senha=1234;
    
    printf("Digite sua senha: \n");
    scanf("%d", &versenha);
    
    while(versenha!=senha){
        printf("Senha invalida, digite novamente \n ");
        scanf("%d", &versenha);
        
    }
    printf("Senha correta, bem vindo! \n");
    return 0;
}
