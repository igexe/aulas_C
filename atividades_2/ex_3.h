#include <stdio.h>

/*
Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido proporcionalmente
ao valor que cada um deu para a realiza��o da aposta. Fa�a um programa que leia quanto cada
apostador apostou, o valor do pr�mio e imprima quanto cada um ganharia do pr�mio com base no
valor investido.
*/

void e3(){
	float ap1,ap2,ap3,premio,total;
	printf("\ndigite quanto apostou o primeiro jogador\n");
	fflush(stdout);
	scanf("%f",&ap1);
	printf("\ndigite quanto apostou o segundo jogador\n");
	fflush(stdout);
	scanf("%f",&ap2);
	printf("\ndigite quanto apostou o terceiro jogador\n");
	fflush(stdout);
	scanf("%f",&ap3);
	printf("\ndigite quanto � o premio total\n");
	fflush(stdout);
	scanf("%f",&premio);
	total=ap1+ap2+ap3;
	ap1=(ap1*100)/total;
	ap2=(ap2*100)/total;
	ap3=(ap3*100)/total;
	ap1=(premio*ap1)/100;
	ap2=(premio*ap2)/100;
	ap3=(premio*ap3)/100;
	printf("\no primeiro jogador recebera %f\no segundo jogador recebera %f\no terceiro jogador recebera %f\n",ap1,ap2,ap3);
}
