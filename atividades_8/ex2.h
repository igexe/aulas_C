#include <stdio.h>
#include <stdlib.h>

/*
 * exercicio para criação de uma struct chamada aluno com nome, matricula e curso;
 * deve ler informações de 5 alunos, armazenar em um vetor e imprimir os dados
 */

void e2(){
	struct Aluno{
		char nome[50];
		int matricula;
		char curso[50];
	}alunos[5];

	printf("\ncadastro de alunos\n");
	fflush(stdout);

	for(int i=0;i<5;i++){
		printf("\ndigite o nome do aluno\n");
		fflush(stdout);
		fgets(alunos[i].nome,50,stdin);

		printf("\ndigite o numero de matricula do aluno %s\n",alunos[i].nome);
		fflush(stdout);
		scanf("%d",&alunos[i].matricula);

		getchar();
		printf("\ndigite o curso do aluno %s",alunos[i].nome);
		fflush(stdout);
		fgets(alunos[i].curso,50,stdin);
	}

	printf("\nos alunos cadastrados foram\n");
	fflush(stdout);

	for(int i=0;i<5;i++){
		printf("\nALUNO: %sMATRICULA: %d\nCURSO: %s",alunos[i].nome,alunos[i].matricula,alunos[i].curso);
		fflush(stdout);
	}

}
