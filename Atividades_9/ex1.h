#include <stdio.h>
#include <stdlib.h>

/*
 * atividade que recebe um número inteiro positivo n e soma números de 1 a n de forma recursiva
 */

int soma(int n){
	if(n==0){
		return 0;
	}
	return n+soma(n-1);
}

void e1(){
	int num,res;

	do{
		printf("\ndigite um número inteiro positivo diferente de zero\n");
		fflush(stdout);
		scanf("%d",&num);

		if(num<0){
			printf("\no número não pode ser negativo\n");
			fflush(stdout);
		}if(num==0){
			printf("\no número não pode ser 0\n");
			fflush(stdout);
		}
	}while(num<=0);

	res=soma(num);

	printf("\na soma dos números de 1 a %d é igual a: %d\n",num,res);
	fflush(stdout);
}
