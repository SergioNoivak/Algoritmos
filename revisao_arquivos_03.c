#include<stdio.h>


/*

    Faça um programa que crie um arquivo BINÁRIO em disco, com o nome “dados.bin”,
    e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número
    em cada linha.


*/
int main(){

    FILE* arquivo = fopen("dados.bin","wb");
    int i;
    int var;
    for(i=0;i<100;i++){
        var = i+1;
        fwrite(&var,4,1,arquivo);



    }
    fclose(arquivo);
    arquivo = fopen("dados.bin","rb");

    int vetor[100];

    for(i=0;i<100;i++)
        fread(&vetor[i],4,1,arquivo);
    fclose(arquivo);

        for(i=0;i<100;i++)
            printf("%d\n",vetor[i]);




}
