#include <stdio.h>
/*
 fun��o que recebe um n�mero inteiro e retorna uma contagem at� o mesmo usando exclama��es a cada linha
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
