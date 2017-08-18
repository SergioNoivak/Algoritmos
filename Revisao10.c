/**

Escreva um programa composto de uma função Max e o programa principal como
segue:
a) A função Max recebe como parâmetros de entrada dois números inteiros e
retorna o maior. Se forem iguais retorna qualquer um deles;

b) O programa principal
lê 4 séries de 4 números a,b,c e d. Para cada série lida imprime o maior dos quatro
números usando a função Max.

*/

#define TRUE 1
#define FALSE 0
#define DIM1 6
#define DIM2 6
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
int Max(int a, int b){

    if(a>b)return a;
    else return b;

}
int main() {
for(int i=0;i<4;i++){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=Max(a,b);
    c=Max(c,d);
    a=Max(a,c);
    printf("%d",a);
}
    return 0;
}



