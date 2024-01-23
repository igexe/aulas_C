#include <stdio.h>
#include <stdlib.h>

void e3(){
	float maior,temp,menor;
	printf("\ndigite 10 números\n");
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
	printf("\no menor número digitado é: %f\no maior número digitado é: %f\n",menor,maior);
}
