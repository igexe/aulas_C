#include <stdio.h>
#include <stdlib.h>

/*
 * considerando a seguinte estrutura representando um vetor R
 *
 * struct Vetor{
 * 	float x;
 * 	float y;
 * 	float z;}
 *
 * programa que recebe, calcula e apresenta a soma de dois vetores
 */

void e3(){
	struct Vetor{
		float x;
		float y;
		float z;
	}soma[2];

	printf("\ninforme valores para dois vetores\n");
	fflush(stdout);

	for(int i=0;i<2;i++){
		printf("\ndigite o valor de x para o %d° vetor\n",i+1);
		fflush(stdout);
		scanf("%f",&soma[i].x);

		printf("\ndigite o valor de y para o %d° vetor\n",i+1);
		fflush(stdout);
		scanf("%f",&soma[i].y);

		printf("\ndigite o valor de z para o %d° vetor\n",i+1);
		fflush(stdout);
		scanf("%f",&soma[i].z);
	}

	printf("\na soma dos dois vetores foi:\nX: %.2f\nY: %.2f\nZ: %.2f\n",soma[0].x+soma[1].x,soma[0].y+soma[1].y,soma[0].z+soma[1].z);
	fflush(stdout);
}
