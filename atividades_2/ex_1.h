#include <stdio.h>

/*
Fa�a um programa que leia tr�s valores e apresente como resultado a soma dos quadrados dos valores
lidos.
*/

void e1(){
	float num1,num2,num3;
	printf("\ndigite tr�s n�meros para somar o quadrado dos mesmos\n");
	fflush(stdout);
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);
	num1=(num1*num1)+(num2*num2)+(num3*num3);
	printf("\na soma dos n�meros digitados �: %f\n",num1);
}
