#include <stdio.h>

//Leia quatro notas, calcule a média aritmética e imprima o resultado.

void e2(){
	float nt1,nt2,nt3,nt4;
	printf("\ndigite suas quatro notas para calcular as mesmas\n");
	fflush(stdout);
	scanf("%f",&nt1);
	scanf("%f",&nt2);
	scanf("%f",&nt3);
	scanf("%f",&nt4);
	nt1=(nt1+nt2+nt3+nt4)/4;
	if(nt1>=6){
		printf("\nvocê tirou %f\nvocê esta aprovado\n",nt1);
	}else{
		printf("\nvocê tirou %f\nvocê esta reprovado",nt1);
	}
}
