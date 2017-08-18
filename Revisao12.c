/**

Utilizando a função criada anteriormente, faça um programa que receba 2 números
naturais n e p, e mostre o resultado da combinação destes n elementos tomados p a p.
*/

#define TRUE 1
#define FALSE 0


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

int comb(int n,int p){

return fat(n)/(fat(n-p)*fat(p));


}


int main() {
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    printf("%d",comb(n,p));

    return 0;
}



