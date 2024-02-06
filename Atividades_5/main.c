#include <stdio.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"

int main(){
	int vetor[5],num;
	char letra;

	printf("\ndigite 5 números inteiros\n");
	fflush(stdout);
	for(int i=0;i<5;i++){
		scanf("%d",&vetor[i]);
	}
	printf("\no maior número que você digitou foi %d\n",e1(vetor));
	fflush(stdout);

	printf("\ndigite uma letra para vela em maiusculo\n");
	fflush(stdout);
	scanf("%c",&letra);
	printf("%c",e2(letra));
	fflush(stdout);

	printf("\ndigite um número inteiro para iniciar a contagem\n");
	fflush(stdout);
	scanf("%d",&num);
	e3(num);
	return 0;
}
