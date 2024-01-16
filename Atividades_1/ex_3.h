#include <stdio.h>

void e3(){
	int num;
	printf("\ndigite um numero\n");
	fflush(stdout);
	scanf("%d",&num);
	num=num*num;
	printf("\no quandrado do numero que você digitou é: %d\n",num);
}
