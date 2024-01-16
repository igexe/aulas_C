#include <stdio.h>

void e2(){
	int num1;
	int num2;
	int num3;
	printf("\nDigite três números inteiros para ver a soma dos mesmos:\n");
	fflush(stdout);
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	num1=num1+num2+num3;
	printf("\nA soma dos números digitados é igual à %d",num1);
}
