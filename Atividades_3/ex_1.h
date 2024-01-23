#include <stdio.h>
#include <stdlib.h>

void e1(){
	//programa que mostra os primeiros 5 multiplos de 3
	int num=3,res;
	printf("\nos primeiros 5 multiplos de 3 são\n");
	for(int i=1;i<=5;i++){
		res=num*i;
		printf("%d\n",res);
	}
}
