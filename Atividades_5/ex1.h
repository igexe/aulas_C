#include <stdio.h>
/*
 função que recebe um vetor inteiro e retorna o maior numero
 */

int e1(int vetor[5]){
	int maior=0;
	for(int i=0;i<5;i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
	}
	return maior;
}
