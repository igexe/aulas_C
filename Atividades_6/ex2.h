#include <stdio.h>
#include <stdlib.h>

/*
 * programa que recebe do usuario dois inteiros e retorna o com maior endere�o de memoria
 */

void e2(){
	int a,b;
	printf("digite dois n�meros inteiros para ver qual tem maior ender�o de memoria\n");
	fflush(stdout);
	scanf("%d",&a);
	scanf("%d",&b);

	if(&a>&b){
		printf("%d tem o maior endere�o de memoria sendo ele: %d\n",a,&a);
		fflush(stdout);
	}else{
		printf("%d tem o maior endere�o de memoria sendo ele: %d\n",b,&b);
		fflush(stdout);
	}
}
