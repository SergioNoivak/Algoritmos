#include<string.h>
#include<stdio.h>
#define TAM 2

/*


9-Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas ´
vezes cada letra do alfabeto aparece dentro do arquivo.

*/




int main(){

    int vetor[128];
    int i=0;
    for(i=0;i<128;i++)
        vetor[i]=0;
    char c;
    FILE* arquivo = fopen("Untitled1.cpp","r");
    while(!feof(arquivo)){

        c=fgetc(arquivo);
        vetor[(int)c]++;
    }

    fclose(arquivo);


    for(i=0;i<128;i++){

    if((i>=65 && i<=90) || (i>=97&&i<=122)){
        printf("COD. DECIMAL:%d| COD. OCTAL:%o | CARACTERE:%c | NUMERO DE VEZES:%d\n",i,i,i,vetor[i]);
        if(i==31 || i==63 || i==95 || i==127)
            printf("\n");
    }
    }

   return 0;
}

