#include<stdio.h>


/*
Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”,
e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número
em cada linha.
*/
int main(){

    FILE* arquivo = fopen("dados.txt","w");
    int i;
    for(i=0;i<100;i++)
        fprintf(arquivo,"%d\n",i+1);
    fclose(arquivo);

}
