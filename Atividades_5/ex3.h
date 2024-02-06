#include <stdio.h>
/*
 função que recebe um número inteiro e retorna uma contagem até o mesmo usando exclamações a cada linha
 */

void e3(int num){
	for(int i=1;i<=num;i++){
		for(int x=0;x<i;x++){
			printf("!");
		}
		printf("\n");
		fflush(stdout);
	}
}
