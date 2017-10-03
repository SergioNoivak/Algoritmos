
/*
                3. Faca um programa que receba dois arquivos do usuario, e crie um terceiro arquivo com ´
                o conteudo dos dois primeiros juntos (o conteudo do primeiro seguido do conteudo do ´
                segundo).

 */


#include<stdio.h>
#include<string.h>
int main(){
    FILE* arquivo1 = fopen("novo_six.c","r");
    FILE* arquivo2 = fopen("Untitled1.cpp","r");
    FILE* arquivo_sintese = fopen("sintese.txt","w");
    /*Caso do arquivo nulo*/
    if(arquivo1==NULL || arquivo2==NULL){
        printf("O arquivo nao pode ser encontrado");
        int c =getchar();
        fclose(arquivo1);
        fclose(arquivo2);
        fclose(arquivo_sintese);
        return 0;
    }

    char c;
    while(!feof(arquivo1)){
        c = fgetc(arquivo1);
        if(!feof(arquivo1))
            fputc(c,arquivo_sintese);

    }
    fclose(arquivo1);
    while(!feof(arquivo2)){
        c = fgetc(arquivo2);
        if(!feof(arquivo2))
        fputc(c,arquivo_sintese);
    }
    fclose(arquivo2);
    fclose(arquivo_sintese);

}
