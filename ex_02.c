/* Fa�a um programa que leia um ano (valor inteiro) e imprima se ele � bissexto ou
n�o. OBS: S�o bissextos todos os anos m�ltiplos de 400. N�o sendo m�ltiplo de
400, s�o bissextos todos os anos m�ltiplos de 4 mas que n�o s�o m�ltiplos de 100*/

#include<stdio.h>

int main(){
int ano;
scanf("%d",&ano);
if(ano%400==0){printf("Eh bissexto \n");}
 else printf("Nao eh bissexto");

return 0;

}
