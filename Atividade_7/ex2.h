#include <stdio.h>
#include <stdlib.h>

/*
 * programa que recebe nome de um arquivo do usuario e retorne quantas linhas o mesmo tem
 */

void e2(){
	FILE *arq;
	char arquivo[100],c;
	int linhas=0;

	printf("\ndigite o nome de um aquivo com a extensão .txt para contar quantas linhas o mesmo tem\n");
	fflush(stdout);
	gets(arquivo);

	arq=fopen(arquivo,"r");

	if(arq){
		while((c=getc(arq))!=EOF){
			if(c=='\n'){
				linhas++;
			}
		}
		printf("\no arquivo: %s \npossui: %d linhas",arquivo,linhas);
		fflush(stdout);
	}else{
		printf("\narquivo não encontrado verifique se o nome esta correto ou esta dentro dessa pasta\n");
	}
}
