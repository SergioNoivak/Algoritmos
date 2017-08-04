/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 +
3 + 6 + 11 + 22 + 33 = 78.*/

#include<stdio.h>

int main(){

    int x,i=0;
    scanf("%d",&x);
    i=x;

    int soma=0;

    while(i>=0){

        if(x%i==0)soma++;
        i--;
    }
    printf("\n soma= ",soma);



return 0;
}
