/**
Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade
de filmes retirados por seus clientes durante o ano de 1997. Agora, esta locadora está
fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma
locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna,
também por parâmetro, um vetor contendo a quantidade de locações gratuitas a que
cada cliente tem direito.
*/

#define TAM 500
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void exercicio_5(int* vet_1, int* vet_2,int sizeOfVet) {
    for(int i =0;i<sizeOfVet;i++){
        vet_2[i] = vet_1[i]/15;
    }
}
int main() {
    int vetor[TAM];
    int resultado[TAM];
    for(int i=0;i<TAM;i++)
        scanf("%d",&vetor[i]);
    exercicio_5(vetor,resultado,TAM);
    for(int i=0;i<TAM;i++)
        printf("%d \n",resultado[i]);
    return 0;
}



