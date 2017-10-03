
/*


                2. Faca um programa em Linguagem C que receba do usuario um arquivo, e mostre na tela ´
                quantas linhas esse arquivo possui.

 */


#include<stdio.h>
#include<string.h>
int main(){
    FILE* arquivo = fopen("novo_six.c","r");

    /*Caso do arquivo nulo*/
    if(arquivo==NULL){
        printf("O arquivo nao pode ser encontrado");
        int c =getchar();
        fclose(arquivo);
        return 0;
    }

    int i=0;
    char string[100000];

    while(!feof(arquivo)){
        fgets(string,100000,arquivo);
        i++;
    }

    fclose(arquivo);
    printf("\n %d",i);
}






