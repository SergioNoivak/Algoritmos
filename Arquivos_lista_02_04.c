
/*
               4-Desenvolver um programa em C que le o conteudo de um arquivo e cria um arquivo com o ´
                mesmo conteudo, mas com todas as letras minusculas convertidas para maiusculas e vice versa. Os ´
                nomes dos arquivos serao fornecidos, via teclado, pelo usuario. A funcao que converte ˜
                maiuscula para minuscula  e o toupper(). Ela e aplicada em cada caractere da string.

 */


#include<stdio.h>
#include<string.h>
#define MAIUSCULA 2
#define MINUSCULA 1

#define FALSE 0


/*
         0 nao letra
         1 Minuscula
         2 Maiuscula

 */

 /* (96,123)  */
 int estado_do_caracter(char c){

    if(c>96 && c<123)
        return MINUSCULA;

    else if(c>64 && c<91)
        return MAIUSCULA;

 return FALSE;

 }
 
 char modificacao(char c){

    switch(estado_do_caracter(c)){

    case MINUSCULA:
        return c-32;
        break;
    case MAIUSCULA:
        return c+32;
        break;
    }
 return c;
 }


int main(){
    FILE* arquivo = fopen("novo_six.c","r");
    FILE* sintese = fopen("sintese.txt","w");

    if(arquivo==NULL){

        printf("Nao possivel abrir");
        fclose(arquivo);
        return 0;
    }

    char c_aux;
    while(!feof(arquivo)){
        c_aux =getc(arquivo);
        if(!feof(arquivo)){
            if(!feof(sintese)){
            fputc(modificacao(c_aux),sintese);
            }
        }
    }
    fclose(arquivo);
    fclose(sintese);
}


