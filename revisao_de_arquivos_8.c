#include<string.h>
#include<stdio.h>
#define TAM 2

/*


8-Faça um programa que peça para o usuário entrar um texto que deseja procurar (uma
palavra) e que em seguida leia um arquivo texto do disco e procure por esta palavra
no arquivo. Caso seja encontrada a palavra digitada pelo usuário em alguma das linhas
do arquivo texto lido do disco, o programa deverá exibir na tela o número da linha do
arquivo onde encontrou esta ocorrência da palavra, bem como o conteúdo da linha
onde se encontra a palavra procurada. Dica: use o comando “strstr” para procurar a
palavra.



*/




int main(){

    char* token;
    char string_lida[100];
    fflush(stdin);
    gets(string_lida);
    FILE* arquivo = fopen("Untitled1.cpp","r");
    if(arquivo==NULL)
        return 0;
    char string[100];
    while(!feof(arquivo)){
        fgets(string,sizeof(string),arquivo);
        token = strstr(string,string_lida);
        if(token!=NULL)
            break;
    }

    if(feof(arquivo))
        printf("Nao achou");
    else
        printf("Achou");
    fclose(arquivo);

   return 0;
}

