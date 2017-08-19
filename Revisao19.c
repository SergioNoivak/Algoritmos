/**

Escreva uma função recursiva que calcule a soma dos dígitos de um inteiro
estritamente positivo n. A soma dos dígitos de 132, por exemplo, é 6.


*/

#define TRUE 1
#define FALSE 0
#define DIM1 3
#define DIM2 3
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

int retorna_soma(int a){

    int ac=0;
    while(a>0){
        ac+=a%10;
        a/=10;
    }
    return ac;

}

int main(){
int n;
scanf("%d",&n);
printf(" \n %d",retorna_soma(n));

return 0;
}

