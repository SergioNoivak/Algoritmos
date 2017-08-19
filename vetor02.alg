Algoritmo "02"

// Faça um algoritmo que leia 100 valores reais e armazene-os no vetor A. Em seguida
//calcule e escreva o somatório dos valores armazenados.
Var
numeros: vetor[1..100] de inteiro
i: inteiro
acumulador: inteiro
Inicio

acumulador<-0

para i de 1 ate 100 faca
leia(numeros[i])
acumulador<-acumulador+numeros[i]
fimpara
escreva(acumulador)
Fimalgoritmo
