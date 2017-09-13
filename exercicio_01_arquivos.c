/**

1. Uma certa firma fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Sabendo que foram entrevistadas n pessoas e que o usuário deve
fornecer:

• o valor de n.
• o nome completo de cada entrevistado,
• o sexo de cada entrevistado (f/m),
• a idade de cada entrevistado,
• sua resposta (s)im, (n)ão ou (i)ndeciso,
• e o preço pago pelo produto.


Desenvolva um programa em linguagem C para armazenar os dados dos entrevistados em
um arquivo de texto.
Neste programa, variáveis, vetores, matrizes e ponteiros NÃO poderão ser globais.
O programa deve ainda, via funções, realizar o seguinte conjunto de funcionalidades:
1) cálculo da média de idade dos entrevistados e a média de preços paga por eles.
2) listagem de quais pessoas responderam sim, não ou indeciso, conforme queira
o usuário.
3) cálculo de quantos entrevistados têm idade acima, igual e abaixo da média.
4) cálculo de quantos entrevistados pagaram acima da média e quantos pagaram
abaixo.
As funcionalidades 1, 3 e 4 serão implementadas por funções que não ‘imprimem’
mensagem em tela. Assim sendo, os resultados delas devem ser ‘impressos’ em
outra(s) função(ões).
Quanto ao usuário, ele poderá escolher quais funcionalidades utilizar,
selecionando uma por vez e podendo repeti-las.
O usuário poderá determinar ainda se a funcionalidade escolhida se aplicará a
ambos os sexos ou a um determinado por ele.
**/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



typedef struct entrevistado {

    char nome[150];
    char sexo;
    int idade;
    char resposta;
    double preco_pago_pelo_produto;

} individuo;

void entrevista(individuo* i) {
    char enter;
    puts("------------------------------------- \n");
    puts("     entre com o NOME do entrevistado:\n");
    gets(i->nome);
    fflush(stdin);
    puts("     entre com o SEXO do entrevistado:(m/f)\n");
    scanf("%c",&i->sexo);
    fflush(stdin);
    puts("     entre com a IDADE do entrevistado:\n");
    scanf("%d",&i->idade);
    fflush(stdin);
    puts("     entre com a RESPOSTA do entrevistado:(s/n/i)\n");
    scanf("%c",&i->resposta);
    fflush(stdin);
    puts("     entre com a PRECO PAGO PELO PRODUTO:\n");
    scanf("%lf",&i->preco_pago_pelo_produto);
    fflush(stdin);
    puts("------------------------------------- \n");
};

void resultado_da_entrevista(individuo* i) {
    puts("------------------------------------- \n");
    printf("NOME: %s\n",i->nome);
    printf("SEXO:%c\n",i->sexo);
    printf("IDADE:%d\n",i->idade);
    printf("RESPOSTA:%c\n",i->resposta);
    printf("PRECO PAGO PELO PRODUTO:%f\n",i->preco_pago_pelo_produto);
}

void gravar_com_arquivo_ja_aberto(FILE* arquivo,individuo* i) {
    fprintf(arquivo,"%s\n",i->nome);
    fprintf(arquivo,"%c\n",i->sexo);
    fprintf(arquivo,"%d\n",i->idade);
    fprintf(arquivo,"%c\n",i->resposta);
    fprintf(arquivo,"%.2f\n",i->preco_pago_pelo_produto);

}



void gravar_individuo(individuo* i) {

    FILE* arquivo = fopen("teste.txt","a");
    gravar_com_arquivo_ja_aberto(arquivo,i);
    fclose(arquivo);
}


int gerar_menu() {

    puts("------------------------------------- \n");
    puts("   1.INSERIR EM TXT                   \n");
    puts("   2.EXIBIR                           \n");
    puts("------------------------------------- \n");
    int resultado;
    scanf("%d",&resultado);
    switch(resultado) {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    default:
        return 0;
        break;
    }
    return 0;
}

double media(double soma,double total){

    return soma/(double)total;
}

int main() {

    int i;
    char enter;
    int resultado = gerar_menu();

    if(resultado==1) {
        int n_pessoas;
        puts("  Entre com o NUMERO DE PESSOAS:\n");
        scanf("%d",&n_pessoas);
        fflush(stdin);
        individuo** vetor;
        vetor=malloc(n_pessoas*sizeof(individuo*));
        for(i=0; i<n_pessoas; i++)
            vetor[i]=malloc(sizeof(individuo));
        for(i=0; i<n_pessoas; i++)
            entrevista(vetor[i]);
        FILE* arquivo = fopen("teste.txt","a");
        for(i=0; i<n_pessoas; i++) {
            gravar_com_arquivo_ja_aberto(arquivo,vetor[i]);
        }
        fclose(arquivo);
    } else if(resultado==2) {
        int contador_de_linha=0;
        FILE* arquivo = fopen("teste.txt","r");
        char string[1000];
        int soma=0;
        double ac_valores=0.0;
        int total=0;
        while(!feof(arquivo)) {
    fgets(string,1000,arquivo);
    switch(contador_de_linha){
        case 2:
            soma+=atoi(string);
            total++;
            break;

        case 4:
            ac_valores+=atof(string);
            break;

        case 5:
            contador_de_linha=0;
            break;

        }
    printf("%s",string);
    contador_de_linha++;
        }

        if(contador_de_linha>0)
        {
            printf("\n A media(Im) das idades eh: %d anos ", (int)media((double)soma,(double)total));
            printf("\n A media(Pm) dos precos eh: $ %.2f  ",media((double)ac_valores,(double)total) );

        }
        fclose(arquivo);
    }
}
