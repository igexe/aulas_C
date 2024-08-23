#include <stdio.h>
#include <stdlib.h>

/*
 * programa que recebe entrada de nome de arquivo e letra e retorne quantas vezes a letra passada pelo usuario aparece
 */

void e3(){
	FILE *arq;
	char arquivo[100],letra,c;
	int vezes=0;

	printf("\n passe um arquivo de texto com sua extensão txt para ver quantas vezes um caracter se repete\n");
	fflush(stdout);
	gets(arquivo);

	arq=fopen(arquivo,"r");

	if(arq){
		printf("\ndigite uma letra para contar quantas vezes esse caractere aparece no arquivo %s\n",arquivo);
		fflush(stdout);
		scanf("%c",&letra);

		while((c=getc(arq))!=EOF){
			if(c==letra){
				vezes++;
			}
		}

		printf("\nno arquivo: %s \no caractere %c \nfoi digitado: %d vezes\n",arquivo,letra,vezes);
	}else{
		printf("\narquivo não encontrado verifique se o nome esta correto ou esta dentro dessa pasta\n");
	}
}
