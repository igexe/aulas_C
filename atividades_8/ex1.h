#include <stdio.h>
#include <stdlib.h>

/*
 * programa que l� nome, idade e endere�o de uma pessoa e armazena em uma struct
 */

void e1(){
	struct Pessoa{
		char nome[50];
		int idade;
		char endereco[200];
	}p1;

	printf("\ninforme o nome da pessoa\n");
	fflush(stdout);
	fgets(p1.nome,50,stdin);

	printf("\ndigite idade de %s",p1.nome);
	fflush(stdout);
	scanf("%d",&p1.idade);

	getchar();
	printf("\ndigite o endere�o de %s",p1.nome);
	fflush(stdout);
	fgets(p1.endereco,200,stdin);

	printf("\ncadastro realizado\nNOME: %s\nIDADE: %d\nENDERE�O: %s",p1.nome,p1.idade,p1.endereco);
	fflush(stdout);
}
