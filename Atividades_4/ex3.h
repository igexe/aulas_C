#include <stdio.h>
#include <stdlib.h>

//vetor que retorna 0 em todos os valores negativos

void e3(){
	int vetor[10];
	for(int i=0;i<10;i++){
		printf("digite um número\n");
		fflush(stdout);
		scanf("%d",&vetor[i]);
	}
	for(int i=0;i<10;i++){
		if(vetor[i]<0){
			vetor[i]=0;
		}
		printf("%d\n",vetor[i]);
	}
}
