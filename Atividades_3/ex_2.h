#include <stdio.h>
#include <stdlib.h>

void e2(){
	//programa que imprime numeros até 100000 em um intervalo de 100
	int num=0;
	while(num<=100000){
		printf("%d\n",num);
		fflush(stdout);
		num=num+100;
	}
}
