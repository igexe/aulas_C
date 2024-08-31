#include <stdio.h>
#include <stdlib.h>

/*
 * exercicio que retorna numero inteiro como binario
 */

int bin(int n){
	if(n==0){
		return 0;
	}
	return (n%2+10*bin(n/2));
}

void e3(){
	int num,res;

	printf("\ndigite um numero inteiro para converte-lo para binario\n");
	fflush(stdout);
	scanf("%d",&num);

	res=bin(num);
	printf("\no binario de %d é: %d\n",num,res);
	fflush(stdout);
}
