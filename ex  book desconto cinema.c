#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int agej, agem;

printf("Digite a idade da acompanhante:\n ");
scanf("%d", &agem);

printf("Digite a idade do acompanhante: \n ");
scanf("%d", &agej);

if((agem%2==0) || (agej%2==0)){
    printf("Desconto :) \n");
}
else{
    printf("Desconto nao se aplica :( \n");
}

return 0; 
}

------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int idoso, estudante;

printf("Voce e estudante? Digite 1 para 'sim' e 2 para 'nao' \n");
scanf("%d", &estudante);

printf("Voce e idoso? Digite 1 para 'sim' e 2 para 'nao' \n");
scanf("%d", &idoso);

if((idoso==1) || (estudante==1)){
    printf("Voce tem desconto! \n");
}else{
    printf("Infelizmente voce nao tem desconto :( \n");
}

return 0; 
}

---------------------------------------------------------------------------
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int hora;

printf("Insira o horario atual no formato 24 horas: \n");
scanf("%d", &hora);

if((hora>=18 && hora<=23) || (hora>=0 && hora<5)) {
    printf("Escuro \n ");
}
else{
    printf("Claro \n ");
}

return 0; 
}
-------------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int imposto, total;

printf("Qual o valor total que voce trouxe em compras do exterior? \n");
scanf("%d", &total);

imposto=total-500;

if(total>500){
    printf("O imposto e de %d", imposto);
}else{
    printf("Voce nao tera que pagar imposto");
}

return 0; 
}

--------------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

float salario, s1, s2, s3;

printf("Digite valor do seu salario: \n");
scanf("%f", &salario);


if(salario <=1000){
    s1 = salario * 1.15;
    printf("Seu novo salario e de: R$%.2f,00 \n ", s1);
}
else if(salario >1000 && salario <=2000){
    s2 = salario * 1.10;
    printf("Seu novo salario e de: R$ %.2f,00 \n", s2);
}
else {
    s3 = salario * 1.05;
    printf("Seu novo salario e de: R$ %.2f,00 \n", s3);
}

return 0; 
}

---------------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

int idade;

printf("Digite sua idade e lhe direi se esta apto a votar ;) \n");
scanf("%d", &idade);

if(idade<16){
    printf("Voce nao e eleitor :(\n");
}

else if(idade>=18 && idade<=65){
    printf("Voce e um eleitor obrigatorio :)\n");
}
else if(idade>=16 || idade<=18 || idade>65){
    printf("Voce e um eleitor facultativo :)\n ");
}

return 0; 
}

