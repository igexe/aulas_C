#include <stdio.h>
#include <stdlib.h>

/*
 * exercicio que declara um int, um float e um char cria ponteiro para cada um deles e modifica seus valores usando ponteiros
 */

void e1(){
	int num,*pn=&num;
	float real,*pr=&real;
	char letra,*pl=&letra;
	printf("digite um número inteiro\n");
	fflush(stdout);
	scanf("%d",pn);
	printf("digite um número real\n");
	fflush(stdout);
	scanf("%f",pr);
	printf("digite uma letra\n");
	fflush(stdout);
	getchar();
	scanf("%c",pl);
	printf("o valor em num é: %d\no valor em real é: %f\no valor em letra é: %c\n",*pn,*pr,*pl);
	printf("digite outro número inteiro\n");
	fflush(stdout);
	scanf("%d",pn);
	printf("digite outro número real\n");
	fflush(stdout);
	scanf("%f",pr);
	printf("digite outra letra\n");
	fflush(stdout);
	getchar();
	scanf("%c",pl);
	printf("o valor em num é: %d\no valor em real é: %f\no valor em letra é: %c\n",*pn,*pr,*pl);
	fflush(stdout);
}
