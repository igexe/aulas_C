#include <stdio.h>
#include <stdlib.h>
/* vetor que armazena os números 1, 0, 5, -2, -5, 7
 * soma os valores nas posições 0, 1 e 5 e exibe o resultado
 * atribui o valor 100 a quarta posição do vetor
 * mostra em cada linha cada valor do vetor
 */

void e1(){
	int a[6],res;
	a[0]=1;
	a[1]=0;
	a[2]=5;
	a[3]=-2;
	a[4]=-5;
	a[5]=7;
	res=a[0]+a[1]+a[5];
	printf("o resultado da soma dos valores em a nas posições 0, 1 e 5 é: %d\n",res);
	a[3]=100;
	for(int i=0;i<6;i++){
		printf("%d\n",a[i]);
	}
}
