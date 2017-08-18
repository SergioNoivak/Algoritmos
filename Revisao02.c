//
///1. Foi realizada uma pesquisa de algumas características físicas de 50 habitantes de uma
///certa região. De cada habitante foram coletados os seguintes dados: sexo, cor dos
///olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e
///idade. Faça um procedimento que leia esses dados em um vetor de registro. O vetor
///de registro deve ser enviado por referência.
///. Faça um procedimento que receba o vetor de registro definido no exercício anterior
///(28), por parâmetro, e retorna também por parâmetro: a maior idade entre os
///habitantes e a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e
///35 (inclusive) e que tenham olhos verdes e cabelos louros.

#define TAM 50
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct habitante {
    char sexo[10];
    char cor_dos_olhos[30];
    char cor_dos_cabelos[30];
    int idade;


} habitante;

void ler_nodo(habitante& no) {
    printf("\n  entre com o sexo: \n");
    scanf("%s",&no.sexo);
    printf("\n  entre com a cor dos olhos: \n");
    scanf("%s",&no.cor_dos_olhos);
    printf("\n  entre com a cor dos cabelos: \n");
    scanf("%s",&no.cor_dos_cabelos);
    printf("\n  entre com a idade:\n");
    scanf("%d",&no.idade);
}

void ler_vetor(habitante *vetor, int whidth_of_vet) {

    for(int i=0; i<whidth_of_vet; i++) {
        ler_nodo(vetor[i]);
    }
}

void exercicio_2(habitante* vetor, int &maior_idade, int &quantidade,int whidth_of_vet) {
    maior_idade=vetor[0].idade;
    for(int i=0; i<whidth_of_vet; i++) {

        if(maior_idade<vetor[i].idade)maior_idade=vetor[i].idade;
        if(strcmp("feminino",vetor[i].sexo)==0 &&vetor[i].idade>=18 &&vetor[i].idade<=35 &&strcmp("verdes",vetor[i].cor_dos_olhos)==0 &&strcmp("louros",vetor[i].cor_dos_cabelos)==0) {
            quantidade++;
        }
    }
}



int main() {
    habitante* hab=(habitante*) malloc(TAM*sizeof(habitante));
    ler_vetor(hab,TAM);
    int maior_idade=-1, quantidade=0;;
    exercicio_2(hab,maior_idade,quantidade,TAM);
    printf("maior idade: %d \n",maior_idade);
    printf("quantidade : %d \n",quantidade);
    return 0;
}
