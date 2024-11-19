#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

struct aluno{
    char nome[50];
    float math, port, geo, hist, cien, educ, artes;
 
    };

int main(){
    setlocale(LC_ALL, "Portuguese");
    
   
    struct aluno a;
    
    printf ("Digite o nome do aluno: \n");
    fgets(a.nome,50,stdin);
    fflush(stdin);
    
    printf("Digite a nota do aluno na matéria de Matemática:\n");
    scanf("%f", &a.math);
    
    printf("Digite a nota do aluno na matéria de Português:\n");
    scanf("%f ", &a.port);
    
    printf("Digite a nota do aluno na matéria de Geografia:\n");
    scanf("%f ", &a.geo);
    
    printf("Digite a nota do aluno na materia de História:\n");
    scanf("%f ", &a.hist);
    
    printf("Digite a nota do aluno na materia de Ciências:\n");
    scanf("%f ", &a.cien);
    
    printf("Digite a nota do aluno na materia de Educação Física:\n");
    scanf("%f ", &a.educ);
    
    printf("Digite a nota do aluno na materia de Artes:\n");
    scanf("%f ", &a.artes);
     
    printf("-----------Nome do aluno: %s\n---------------", a.nome);
    printf("Matemática: %2.f \n", a.math);
    printf("Português: %.2f \n", a.port);
    printf("Geografia: %.2f \n", a.geo);
    printf("História: %.2f \n", a.hist);
    printf("Ciências: %.2f \n", a.cien);
    printf("Educação Física: %.2f \n", a.educ);
    printf("Artes: %.2f \n", a.artes);
    
    
    
    
    return 0;
}
