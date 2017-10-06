/*
              5. Faça um programa que recebe como entrada o nome de um arquivo de entrada e o
                nome de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de
                tamanho de 30 caracteres. No arquivo de saída deverá ser escrito o arquivo de entrada
                de forma inversa. Veja um exemplo:

                Arquivo de entrada:
                    Hoje é dia de prova de AP
                    A prova está muito fácil
                    Vou tirar uma boa nota

                Arquivo de saída:
                    Aton aob amu rarit uov
                    Licáf otium átse avorp A
                    PA ed avorp ed aid é ejoH
*/

#include<stdio.h>
#include<string.h>
#define TAM 10000
#include<stdlib.h>

int main(){


    char c;

    FILE* arquivo = fopen("Untitled4.cpp","r");
    fseek(arquivo,0,SEEK_END);
    int i=0;

    while(1){

        fseek(arquivo,i-1,SEEK_END);
        c=fgetc(arquivo);
        printf("%c",c);
        i--;
        if(ftell(arquivo)==SEEK_SET+1)
            break;
    }
    fclose(arquivo);
}

