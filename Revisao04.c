/**
Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada
habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um
procedimento que leia esses dados em um vetor de registro. O vetor de registro deve
ser enviado por referência.
 Faça um procedimento que receba o vetor de registro definido no exercício anterior
(30), por parâmetro, e retorna também por parâmetro: a média de salário entre os
habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com 3 filhos
que recebe até R$500,00.



*/

#define TAM 500
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

bool valida_no_exercicio_04(habitante No){

bool valida=true;
    if(strcmp("feminino",No.sexo)!=0)
        valida=false;
    if(No.numero_de_filhos!=3)
        valida=false;
    if(No.salario>500)
        valida=false;

        return valida;
}


void exercicio_04(habitante* vetor, int whidth_of_vet, double salario_medio,int maior_idade,int menor_idade,int quantidade_que_ele_quer)
{

    int ac_salario=0;
    menor_idade=INT_MAX;
    maior_idade=INT_MIN;
    int quantidade=0;
    quantidade_que_ele_quer=0;

    for(int i=0; i<whidth_of_vet; i++) {
        ac_salario+=vetor[i].salario;
        quantidade++;
        if(vetor[i].idade<menor_idade)menor_idade=vetor[i].idade;
        if(vetor[i].idade>maior_idade)maior_idade=vetor[i].idade;
        if(valida_no_exercicio_04(vetor[i])==true)
            quantidade_que_ele_quer++;
    }
    salario_medio = ac_salario/(double)quantidade;

}












int main() {
    habitante* hab=(habitante*) malloc(TAM*sizeof(habitante));
    ler_vetor(hab,TAM);

     return 0;
}



