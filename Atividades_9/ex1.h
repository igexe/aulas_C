#include <stdio.h>
#include <stdlib.h>

/*
 * atividade que recebe um n�mero inteiro positivo n e soma n�meros de 1 a n de forma recursiva
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
		printf("\ndigite um n�mero inteiro positivo diferente de zero\n");
		fflush(stdout);
		scanf("%d",&num);

		if(num<0){
			printf("\no n�mero n�o pode ser negativo\n");
			fflush(stdout);
		}if(num==0){
			printf("\no n�mero n�o pode ser 0\n");
			fflush(stdout);
		}
	}while(num<=0);

	res=soma(num);

	printf("\na soma dos n�meros de 1 a %d � igual a: %d\n",num,res);
	fflush(stdout);
}
