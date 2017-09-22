#include<stdio.h>


/*

    Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo
cada uma das linhas numeradas na tela. A ideia é podermos pegar um arquivo um
arquivo texto qualquer (pode ser inclusive o arquivo do programa fonte – arquivo “.c”
– de um destes exercícios) e mostrar na tela com as linhas numeradas. As primeiras
linhas do arquivo iriam ser exibidas na tela da seguinte forma:
1: #include
2: #include
3:
4: FILE *ArqEntrada;
5: ...



*/
int main(){

    ///Untitled4.cpp

    FILE* arquivo = fopen("Untitled4.cpp","r");
    int i=0;
    char string[100];
    while(!feof(arquivo))
    {
        fgets(string,100,arquivo);
        printf("%d:%s\n",i+1,string);
        i++;
    }
    fclose(arquivo);


}
