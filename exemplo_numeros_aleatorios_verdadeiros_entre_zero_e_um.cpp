
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<random>
#include<iostream>
using namespace std;
int main() {

    srand((unsigned) time(NULL));
    default_random_engine generator((unsigned) time(NULL));
    uniform_int_distribution<int> distribution(0, 4000000);

    double populacao[10];
    double aptidao[10];

    for (int i = 0; i<10; i++) {
        populacao[i] = distribution(generator)/4000000.0;
        cout << populacao[i] << endl;
        aptidao[i] = populacao[i];
    }
}
