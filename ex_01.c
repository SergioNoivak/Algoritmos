/*1. Um circo deseja saber qual o pre�o ideal dos ingressos, de acordo com a cidade que
visitam. Para tanto, eles descobriram que em m�dia 120 pessoas comparecem em
cada sess�o, quando o pre�o do ingresso � R$ 5,00. A partir disso, a cada redu��o de
R$ 0,50 h� um aumento de p�blico, que difere em cada cidade. Cada sess�o tem um
custo de R$ 200,00 ao circo. Fa�a um programa que, dado o n�mero adicional de
pessoas a cada redu��o de R$ 0,50 no pre�o do ingresso, imprima a tabela de lucro
de cada sess�o. Considere a varia��o de pre�o entre R$ 5,00 e R$ 1,00. Informe
tamb�m ao usu�rio, qual � o valor de ingresso que gera o maior lucro. Dica: para
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
