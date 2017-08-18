/**
Faça uma função que recebe, por parâmetro, uma matriz A(6,6) e retorna a soma dos
elementos da sua diagonal principal e da sua diagonal secundária.
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


int exercicio_07(int mat[DIM1][DIM2]){
int bool_eh_quadrada=verifica_se_eh_quadrada(mat);

if(bool_eh_quadrada==TRUE){
    int acumulador=0;
    acumulador+=retorna_soma_diagonal_principal(mat);
    acumulador+=retorna_soma_diagonal_secundaria(mat);
    return acumulador;
}
else{printf("a matriz nao eh quadrada");
exit(0);
}
}

int main() {

    int mat[DIM1][DIM2];
    le_matriz(mat);
    printf("%d",exercicio_07(mat));

    return 0;
}
