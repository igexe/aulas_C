#include <stdio.h>

//Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.

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
		printf("\nvoc� tirou %f\nvoc� esta aprovado\n",nt1);
	}else{
		printf("\nvoc� tirou %f\nvoc� esta reprovado",nt1);
	}
}
