/**
Dada uma matriz quadrada Anxn , verificar se A é um quadrado mágico.
*/

#define TRUE 1
#define FALSE 0
#define DIM1 3
#define DIM2 3
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


int soma_coluna(int mat[DIM1][DIM2],int j){
if(j>=DIM2){
    printf("\n indice invalido");
    exit(0);
}
else{
    int acumulador=0;
    for(int i=0; i<DIM1; i++)
    acumulador+=mat[i][j];
    return acumulador;
}

}

int valida_colunas(int mat[DIM1][DIM2],int &valor_final){
    int valor = soma_coluna(mat,0);
    int valida=TRUE;
    for(int i=0; i<DIM2; i++)
        if(soma_coluna(mat,i)!=valor)valida=FALSE;

    if(valida==TRUE)valor_final=valor;
    return valida;
}



int soma_linha(int mat[DIM1][DIM2],int i){
if(i>=DIM1){
    printf("\n indice invalido");
    exit(0);
}
else{
    int acumulador=0;
    for(int j=0; j<DIM2; j++)
    acumulador+=mat[i][j];
    return acumulador;
}

}

int valida_linhas(int mat[DIM1][DIM2],int &valor_final){
    int valor = soma_linha(mat,0);
    int valida=TRUE;
    for(int i=0; i<DIM1; i++)
        if(soma_linha(mat,i)!=valor)valida=FALSE;
    if(valida==TRUE)valor_final=valor;
    return valida;
}


int exercicio_13(int mat[DIM1][DIM2]){
    if(verifica_se_eh_quadrada(mat)==FALSE)
    return FALSE;
    int valor1,valor2;
    if(valida_colunas(mat,valor1)!=valida_colunas(mat,valor2))
        return FALSE;
    if(valor1!=valor2)
        return FALSE;

    if(valor2!=retorna_soma_diagonal_principal(mat))
        return FALSE;
    if(valor2!=retorna_soma_diagonal_secundaria(mat))
        return FALSE;

    return TRUE;
}

int main(){
    int mat[DIM1][DIM2];
    le_matriz(mat);
    int result = exercicio_13(mat);
    if(result==TRUE)printf("ela eh :D");
    else printf("ela nao eh");

return 0;
}

