#include <stdio.h>
#include <stdlib.h>

/*
 * atividade para fazer calculo de fatorial com recursividade
 */

int fatorial(int n){
	if(n==0){
		return 0;
	}if(n==1){
		return 1;
	}
	return n*fatorial(n-1);
}

void e2(){
	int num,res;

	printf("\ndigite um número para calcular seu fatorial\n");
	fflush(stdout);
	scanf("%d",&num);

	res=fatorial(num);
	printf("\no fatorial de %d é: %d",num,res);
	fflush(stdout);
}
