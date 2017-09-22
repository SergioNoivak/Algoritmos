#include<stdio.h>
#define TAM 2

/*

 7. Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome,
nota1, nota2. Calcule a média aritmética simples dos 10 alunos e depois escreva em
um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média. Lembre-se de
que as notas e média deverão ser apresentadas como valores que possuem até 2 casas
após a vírgula.

*/

typedef struct Aluno{

    char nome[100];
    float nota1;
    float nota2;


}Aluno;
  float media(Aluno aluno){
    return (aluno.nota1+aluno.nota2)/(float)2;

}




int main(){

    Aluno aluno[TAM];
    int i;
    for(i=0;i<TAM;i++){
        fflush(stdin);
        scanf("%s",&aluno[i].nome);
        fflush(stdin);
        scanf("%f",&aluno[i].nota1);
        fflush(stdin);
        scanf("%f",&aluno[i].nota2);

    }

    FILE* arquivo = fopen("data.txt","w");

    for(i=0;i<TAM;i++){
    //puts(aluno[i].nome);
    fprintf(arquivo,"%s\n",aluno[i].nome);
    //printf("%d\n",aluno[i].nota1);
    fprintf(arquivo,"%.2f\n",aluno[i].nota1);
    //printf("%d\n",aluno[i].nota2);
    fprintf(arquivo,"%.2f\n",aluno[i].nota2);
    //printf("%.2f\n",media(aluno[i]));
    fprintf(arquivo,"%.2f\n",media(aluno[i]));
    //fprintf(arquivo,"%c\n",'*');
    }
fclose(arquivo);

}
