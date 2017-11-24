#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//Seja a seguinte struct que é utilizada para descrever os produtos que estão no
//estoque de uma loja :
//struct Produto {
//	char nome[30]; /* Nome do produto */
//	int codigo; /* Codigo do produto */
//	double preco; /* Preco do produto */
//};
//a) Escreva uma instrução que declare uma matriz de Produto com 10 itens de
//produtos;
//b) Atribua os valores "Pe de Moleque", 13205 e R$0, 20 aos membros da posição 0
//e os valores "Cocada Baiana", 15202 e R$0, 50 aos membros da posição 1 da
//matriz anterior;


enum status {

	tamanho = 10


};


typedef struct Produto {

	char nome[30];
	int codigo;
	double preco;

}Produto;

//a) Escreva uma instrução que declare uma matriz de Produto com 10 itens de
//produtos;



Produto* funcao_a() {

	Produto* matriz = (Produto*)malloc(sizeof(Produto) * tamanho);
	return matriz;
}

//b) Atribua os valores "Pe de Moleque", 13205 e R$0, 20 aos membros da posição 0
//e os valores "Cocada Baiana", 15202 e R$0, 50 aos membros da posição 1 da
//matriz anterior;

void funcao_b(Produto* matriz) {
	strcpy(matriz[0].nome, "Pe de Moleque");
	matriz[0].preco = 0.2;
	matriz[0].codigo = 13205;
	strcpy(matriz[1].nome, "Cocada Baiana");
	matriz[0].preco = 0.5;
	matriz[0].codigo = 15202;
}

int main() {


	Produto** matriz = funcao_a();
	funcao_b(matriz);


	system("Pause");
}
