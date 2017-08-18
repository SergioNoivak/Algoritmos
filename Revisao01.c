//
///1. Foi realizada uma pesquisa de algumas características físicas de 50 habitantes de uma
///certa região. De cada habitante foram coletados os seguintes dados: sexo, cor dos
///olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e
///idade. Faça um procedimento que leia esses dados em um vetor de registro. O vetor
///de registro deve ser enviado por referência.

#include<stdio.h>
#include<stdlib.h>

typedef struct habitante{
    char sexo[10];
    char cor_dos_olhos[30];
    char cor_dos_cabelos[30];
    int idade;


}habitante;


void ler_nodo(habitante& no){
    printf("\n  entre com o sexo: \n");
    scanf("%s",&no.sexo);
    printf("\n  entre com a cor dos olhos: \n");
    scanf("%s",&no.cor_dos_olhos);
    printf("\n  entre com a cor dos cabelos: \n");
    scanf("%s",&no.cor_dos_cabelos);
    printf("\n  entre com a idade:\n");
    scanf("%d",&no.idade);
    }

void ler_vetor(habitante *vetor, int whidth_of_vet){

for(int i=0;i<whidth_of_vet;i++){
    ler_nodo(vetor[i]);
}


}

int main() {
    habitante* hab=(habitante*) malloc(50*sizeof(habitante));
    ler_vetor(hab,50);
    return 0;
}



