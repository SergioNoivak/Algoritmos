/*
               6. Faca um programa em C que recebe como entrada o nome de um arquivo de entrada
                  e o nome de um arquivo de saıda. Cada linha do arquivo de entrada possui colunas de
                  tamanho de 30 caracteres. No arquivo de saıda devera ser escrito o arquivo de entrada ´
                  de forma inversa. Veja um exemplo:

                   Arquivo de entrada:
                    Hoje e dia de prova de AP ´
                    A prova esta muito facil ´
                    Vou tirar uma boa nota

                    Arquivo de saıda:
                    Aton aob amu rarit uov
                    Licaf otium ´ atse avorp A ´
                    PA ed avorp ed aid e ejoH
*/

#include<stdio.h>
#include<string.h>
#define TAM 10000


int main(){

    char string[30000];
    FILE* arquivo = fopen("novo_six.c","r");
    fseek(arquivo,-30000,SEEK_END);
    int i=1;
    while(ftell(arquivo)!=SEEK_SET){
        fgets(string,30000,arquivo);
        puts(string);
    if(ftell(arquivo)!=SEEK_SET)
        fseek(arquivo,-30000*i,SEEK_END);
        getchar();
    }
}
