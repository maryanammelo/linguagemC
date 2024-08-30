#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float tv, maql, lamp, chuv, ar, fp, htv, hmaql, hlamp, hchuv, har, hfp, h, pottv, potmaql, potlamp, potchuv, potar, potfp, pot, cdtv, cdmaql, cdlamp, cdchuv, cdar, cdfp, cdt, cmt, CT, kWh;
    char nome[50];
    
    //quantidade de cada aparelho na resisdencia 
    printf("Qual a quantidade de TVs em sua residencia? \n");
    scanf("%f", &tv);
    
    printf("Qual a quantidade de maquinas de lavar em sua residencia? \n");
    scanf("%f", &maql);
    
    printf("Qual a quantidade de lampadas em sua residencia? \n");
    scanf("%f", &lamp);
    
    printf("Qual a quantidade de chuveiros em sua casa? \n");
    scanf("%f", &chuv);
    
    printf("Digite quantos ar condicionado há em sua residencia? \n");
    scanf("%f", &ar);
    
    printf("Digite quantos ferros de passar há em sua residencia? \n");
    scanf("%f", &fp);
    
    //quantidade de tempo que cada aparelho fica ligado na residencia 
    printf("Digite quanto tempo a(s) TVs de sua casa ficam ligadas, em horas? \n");
    scanf("%f", &htv);
    
    printf("Digite quanto tempo a(s) maquinas de lavar da sua casa ficam ligadas, em horas? \n");
    scanf("%f", &hmaql);
    
    printf("Digite quanto tempo as lampadas da sua casa ficam ligadas, em horas? \n");
    scanf("%f", &hlamp);
    
    printf("Digite quanto tempo os chuveiros da sua casa ficam ligados, em horas? \n");
    scanf("%f", &hchuv);
    
    printf("Digite quanto tempo os ar condicionados da sua casa ficam ligados, em horas? \n");
    scanf("%f", &har);
    
    printf("Digite quanto tempo os ferros de passar da sua residencia ficam ligados, em horas? \n");
    scanf("%f", &hfp);
    
    //potencia eletrica dos eletrodomesticos
    printf("Qual a potencia eletrica da tv em sua residencia? \n");
    scanf("%f", &pottv);
    
    printf("Qual a potencia eletrica da maquina de lavar em sua residencia? \n");
    scanf("%f", &potmaql);
    
    printf("Qual a potencia eletrica das lampadas da sua casa? \n");
    scanf("%f", &potlamp);
    
    printf("Qual a potencia eletrica dos chuveiros de sua residencia? \n");
    scanf("%f", &potchuv);
    
    printf("Qual a potencia eletrica dos ar condicionados da sua casa? \n");
    scanf("%f", &potar);
    
    printf("Qual a potencia eletrica dos ferros de passar da sua casa? \n");
    scanf("%f", &potfp);

    //calculo do consumo de cada eletrodomestico por dia 
    cdtv = pottv * htv;
    cdmaql = potmaql * hmaql;
    cdlamp = potlamp * hlamp;
    cdchuv = potchuv * hchuv;
    cdar = potar * har;
    cdfp = potfp * hfp;

    //consumo total dos eletrodomesticos por dia
    cdt = cdtv + cdmaql + cdlamp + cdchuv + cdar + cdfp;

    //consumo mensal dos eletrodomesticos
    cmt = cdt * 30;
    CT = cmt * 0.98;

    //limpeza do buffer de entrada???
    getchar(); //limpa o caractere '\n' deixado pelo último scanf??

    printf("Digite seu nome completo para que sua conta de energia seja impressa: \n");
    scanf("%[^\n]", nome); // é colocado assim "%[^\n]s", para que o nome completo da pessoa seja impresso na tela.

    printf("--------------------------------------------------- \n ");
    printf("Senhor(a): %s", nome);
    printf("Valor: R$ %.2f \n", CT);

    

    return 0;
}