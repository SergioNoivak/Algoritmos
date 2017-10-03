
/*


                Codifique, compile e execute um programa que:
                (a) crie/abra um arquivo texto de nome ”arq.txt”,
                (b) permita que o usuario entre com diversos caracteres nesse arquivo, ate que o
                usuario entre com o caractere '0',
                (c) reinicie o arquivo, fazendo o ponteiro apontar para seu inıcio, e
                (d) lendo-o caractere por caractere, e escrevendo na tela todos os caracteres armazenados.


 */


#include<stdio.h>
#include<string.h>
int main(){
    FILE* arquivo = fopen("arq.txt","w");

    /*Caso do arquivo nulo*/
    if(arquivo==NULL){
        printf("O arquivo nao pode ser alocado");
        int c =getchar();
        fclose(arquivo);
        return 0;
    }

    char c;

    scanf("%c",&c);
    while(c!='0'){
        fprintf(arquivo,"%c",c);
        scanf("%c",&c);
    }

    fclose(arquivo);


    /* Ler do arquivo    */

    char c_aux;
    arquivo = fopen("arq.txt","r");
    while(!feof(arquivo)){

        c_aux = fgetc(arquivo);
        putchar(c_aux);

    }

    fclose(arquivo);

}






