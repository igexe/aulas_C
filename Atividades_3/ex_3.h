#include <stdio.h>
#include <stdlib.h>

void e3(){
	float maior,temp,menor;
	printf("\ndigite 10 n�meros\n");
	fflush(stdout);
	scanf("%f",&temp);
	maior=temp;
	menor=temp;
	for(int i=0;i<=9;i++){
		scanf("%f",&temp);
		if(temp>maior){
			maior=temp;
		}
		if(temp<menor){
			menor=temp;
		}
	}
	printf("\no menor n�mero digitado �: %f\no maior n�mero digitado �: %f\n",menor,maior);
}
