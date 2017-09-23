#include<string.h>
#include<stdio.h>
#define TAM 2

/*


10-Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto
´ contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.


*/

char transforma(char c){

    int vogal=0;

        switch(c)
        {
        case 'a':
            vogal =1;
            break;
        case 'e':
            vogal =1;
            break;
        case 'i':
            vogal =1;
            break;
        case 'o':
            vogal =1;
            break;
        case'u':
            vogal =1;
            break;
        case 'A':
            vogal =1;
            break;
        case 'E':
            vogal =1;
            break;
        case 'I':
            vogal =1;
            break;
        case 'O':
            vogal =1;
            break;
        case 'U':
            vogal =1;
            break;
        default:
            vogal=0;
            break;

        }

    if(vogal==1)
        c='*';
    return c;

    }

int main()
{
    FILE* arquivo1 = fopen("Untitled1.cpp","r");
    FILE* arquivo2 = fopen("Untitled2.txt","w");
    char c;
    while(!feof(arquivo1)){

            c = fgetc(arquivo1);
            c = transforma(c);
            fprintf(arquivo2,"%c",c);
    }


fclose(arquivo1);
fclose(arquivo2);



return 0;
}

