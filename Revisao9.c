/**
Escreva um programa que leia o raio de um círculo e faça duas funções: uma função
chamada área que calcula e retorna a área do círculo e outra função chamada
perímetro que calcula e retorna o perímetro do círculo. Área = PI * r2 ; Perímetro = PI
* 2 * r; 
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

double area(double raio){

    return PI*raio*raio;

}

double perimetro(double raio){
    
    return 2*PI*raio;
    
}

int main() {


    return 0;
}



