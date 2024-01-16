#include <stdio.h>

/*
Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores
lidos.
*/

void e1(){
	float num1,num2,num3;
	printf("\ndigite três números para somar o quadrado dos mesmos\n");
	fflush(stdout);
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);
	num1=(num1*num1)+(num2*num2)+(num3*num3);
	printf("\na soma dos números digitados é: %f\n",num1);
}
