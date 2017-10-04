/*
               7. Faca um programa em C que recebe um vetor de n numeros, converta cada um desses ´
                numeros para binario e grave a sequencia de 0s e 1s em um arquivo texto. Cada numero ´
                deve ser gravado em uma linha.
*/

#include<stdio.h>
#include<string.h>
#define TAM 10000
#include<stdlib.h>

char* Dec2Bin(int n){
    char string[10000];
    strcpy(string," ");
    char* lixo;
        while(n){

            if(n&1==1)
              strcat(string,"1");
            else
              strcat(string,"0");
            n=n>>1;
        }
        return string;
}


int main(){

int N;
scanf("%d",&N);
int* vet = (int*) malloc(sizeof(int)*N);

int i=0;
FILE* sintese = fopen("sintese.txt","w");

while(i<N)

    scanf("%d",&vet[i]);
    puts(Dec2Bin(vet[i]));
    i++;
}

fclose(sintese);







