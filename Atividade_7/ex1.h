#include <stdio.h>
#include <stdlib.h>

/*
 * programa que cria e abra um txt chamado "arq.txt"
 * permite o usuario gravar diversos dados até que o usuario digite 0
 * feche o arquivo e reabra lendo todos os caracteres armazenados
 */

void e1(){
	FILE *arq;
	char letra,c;
	arq=fopen("arq.txt","a");

	if(arq){
		do{
			printf("digite uma letra para salvar no arquivo de texto: 'arq.txt'\nou digite '0' para encerrar o processo e ver caracteres salvos\n");
			fflush(stdout);
			scanf("%c ",&letra);
			if(letra!='0'){
				fputc(letra,arq);
				fputc('\n',arq);
			}
		}while(letra!='0');
		fclose(arq);

		arq=fopen("arq.txt","r");
		if(arq){
			printf("\ncaracteres salvos no arquivo\n");
			while((c=getc(arq))!=EOF){
				printf("%c",c);
				fflush(stdout);
			}
		}
	}else{
		printf("\nnão foi possivel criar ou abrir o arquivo verifique espaço disponivel e permissões do usuario");
	}
	fclose(arq);
}
