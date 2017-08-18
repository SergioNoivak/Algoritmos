/**

Faça uma função que receba, por parâmetro, uma matriz A(12,12) e retorne a média
aritmética dos elementos abaixo da diagonal principal.

*/

#define TRUE 1
#define FALSE 0
#define DIM1 6
#define DIM2 6
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void le_matriz(int mat[DIM1][DIM2]) {

    for(int i=0; i<DIM1; i++)
        for(int j=0; j<DIM2; j++)
            scanf("%d",&mat[i][j]);

}

int verifica_se_eh_quadrada(int mat[DIM1][DIM2]){
    if(DIM1==DIM2)
        return 1;
    else return 0;
}

int retorna_soma_diagonal_principal(int mat[DIM1][DIM2]) {

    int acumulador=0;
    for(int i=0; i<DIM1; i++) {

        acumulador+=mat[i][i];
    }
    return acumulador;
}

int retorna_soma_diagonal_secundaria(int mat[DIM1][DIM2]) {
    int acumulador=0;
    for(int i=0; i<DIM1; i++){
        for(int j=0; j<DIM2; j++){
            if((i+j)==(DIM1-1))
            acumulador+=mat[i][j];}
    }
    return acumulador;
}


int valida_se_exercicio_08(int i,int j){

    if(i>j)return TRUE;
    else return FALSE;

}


int exercicio_08(int mat[DIM1][DIM2]){
int acumulador=0;
    for(int i=0; i<DIM1; i++){
        for(int j=0; j<DIM2; j++){
            if(valida_se_exercicio_08(i,j))
            acumulador+=mat[i][j];}
    }
    return acumulador;
}


int main() {
    int mat[DIM1][DIM2];
    le_matriz(mat);
    printf("%d",exercicio_08(mat));

    return 0;
}



