/* Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou
não. OBS: São bissextos todos os anos múltiplos de 400. Não sendo múltiplo de
400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100*/

#include<stdio.h>

int main(){
int ano;
scanf("%d",&ano);
if(ano%400==0){printf("Eh bissexto \n");}
 else printf("Nao eh bissexto");

return 0;

}
