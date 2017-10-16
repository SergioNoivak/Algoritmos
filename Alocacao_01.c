    #include<stdio.h>

    /*
    Escreva um programa que solicita ao usuário um número n e então lê um vetor de n
    notas e calcula a média aritmética
    */


    double media(double* vetor, int size_v)
    {

        int ac=0;
        int i=0;
        for(i=0; i<size_v; i++)
            ac+=vetor[i];

        return ac/(double)size_v;
    }

    void ler(double *nota)
    {

        printf("\n escreva a nota: \n");
        scanf("%lf",nota);
    }

    void exibe(double *nota)
    {

        printf("\n nota: \n");
        printf("%lf", *nota);

    }
    int main()
    {

        int n;
        scanf("%d",&n);
        double* notas;
        int i;
        for(i=0; i<n; i++)
        {
            notas = (double*) malloc(sizeof(double)*n);
        }
        for(i=0; i<n; i++)
        {
            ler(&notas[i]);
            exibe(&notas[i]);

        }
        

        printf("\n a media : %lf \n",media(notas,n));


            free(notas);

    }
