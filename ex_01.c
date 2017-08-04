/*1. Um circo deseja saber qual o preço ideal dos ingressos, de acordo com a cidade que
visitam. Para tanto, eles descobriram que em média 120 pessoas comparecem em
cada sessão, quando o preço do ingresso é R$ 5,00. A partir disso, a cada redução de
R$ 0,50 há um aumento de público, que difere em cada cidade. Cada sessão tem um
custo de R$ 200,00 ao circo. Faça um programa que, dado o número adicional de
pessoas a cada redução de R$ 0,50 no preço do ingresso, imprima a tabela de lucro
de cada sessão. Considere a variação de preço entre R$ 5,00 e R$ 1,00. Informe
também ao usuário, qual é o valor de ingresso que gera o maior lucro. Dica: para
testar o algoritmo, considere taxas de aumento de 26 e 30 pessoas.
*/
#include<stdio.h>
int main(){
int x=15;
float L;
float maiorLucro;
int i;


maiorLucro=((120*5.00)-200);
for(i=0;i<=10; i++)
    {L=(double)((120+i*x)*(5.00-(0.50*i))-200);
     printf(" \n L(%d)=%f",i,L);
     if(maiorLucro>=L)maiorLucro=L;}
printf("\n \n \n maior lucro:",maiorLucro);
return 0;

}
