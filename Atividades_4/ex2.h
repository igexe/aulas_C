#include <stdio.h>
#include <stdlib.h>

/*
 * vetor que recebe 10 inteiros e retorna quantos são pares
 */

void e2(){
	int vetor[10],res=0;
	for(int i=0;i<10;i++){
		printf("digite um número inteiro\n");
		fflush(stdout);
		scanf("%d\n",&vetor[i]);
	}
	for(int i=0;i<10;i++){
		if(vetor[i]%2==0){
			res++;
		}
	}
	printf("exitem %d números no vetor",res);
}
