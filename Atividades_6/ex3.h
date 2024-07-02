#include <stdio.h>
#include <stdlib.h>

/*
 * programa com array inteira de 5 elementos que le o array e imprime o dobro dos valores usando apenas ponteiros
 */

void e3(){
	int v[5],*pv=v;

	printf("preencha a lista com inteiros\n");
	for(int i=0;i<5;i++){
		printf("espaço %d/5\n",i+1);
		fflush(stdout);
		scanf("%d",pv+i);
	}

	printf("\nos números digitados e seus dobros foram:\n");

	for(int i=0;i<5;i++){
		printf("%d | %d\n",*(pv+i),*(pv+i)*2);
		fflush(stdout);
	}
}
