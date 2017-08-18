/**
Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada
habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um
procedimento que leia esses dados em um vetor de registro. O vetor de registro deve
ser enviado por referência.
*/

#define TAM 500
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct habitante {
    char sexo[10];
    double salario;
    int numero_de_filhos;
    int idade;


} habitante;


void ler_nodo(habitante& no) {
    printf("\n  entre com o sexo: \n");
    scanf("%s",&no.sexo);
    printf("\n  entre com o salario:       \n");
    scanf("%f",&no.salario);
    printf("\n  entre com o numero de filhos:\n");
    scanf("%s",&no.numero_de_filhos);
    printf("\n  entre com a idade:\n");
    scanf("%d",&no.idade);
}

void ler_vetor(habitante *vetor, int whidth_of_vet) {

    for(int i=0; i<whidth_of_vet; i++) {
        ler_nodo(vetor[i]);
    }


}



int main() {
    habitante* hab=(habitante*) malloc(TAM*sizeof(habitante));
    ler_vetor(hab,TAM);

     return 0;
}



