/*
               5-. Faca um programa no qual o usuario informa o nome do arquivo, e uma palavra, e retorne ´
                    o numero de vezes que aquela palavra aparece no arquivo.

*/

#include<stdio.h>
#include<string.h>
#define TAM 10000


int main(){

    FILE* arquivo = fopen("novo_six.c","r");
    char string[TAM];
    char string_lida[TAM];
    fflush(stdin);
    scanf("%s",&string_lida);
    int i=0;

    while(!feof(arquivo)){
            fgets(string,TAM,arquivo);
            if(strstr(string,string_lida)!=NULL)
                i++;
    }
    fclose(arquivo);
    printf("\n %d veze(s)",i);

}
