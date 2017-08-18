/**

Crie uma função que receba um número natural e retorne o seu fatorial.

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
int fat(int n){
    if(n==1||n==0)
        return 1;
    else return n*fat(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fat(n));

    return 0;
}
