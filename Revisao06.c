/**Faça uma função que recebe, por parâmetro, uma matriz A(5,5) e retorna a soma dos
seus elementos.
*/

#define DIM1 5
#define DIM2 5
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void le_matriz(int** matriz,int dim1,int dim2){
    for(int i =0;i<dim1;i++)
        for(int j=0;j<dim2;j++)
            scanf("%d",&matriz[i][j]);
}

int retorna_soma(int** matriz,int dim1,int dim2){

int acumulador=0;;
    for(int i =0;i<dim1;i++)
        for(int j=0;j<dim2;j++)
            acumulador+=matriz[i][j];

return acumulador;
}

int main() {
    int** A =(int**) malloc(DIM1*sizeof(int*));
    for(int i=0;i<DIM1;i++)
        A[i]=(int*)malloc(DIM2*sizeof(int));
    le_matriz(A,DIM1,DIM2);
    printf("%d",retorna_soma(A,DIM1,DIM2));
    return 0;
}



