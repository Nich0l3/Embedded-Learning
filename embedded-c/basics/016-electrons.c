#include <stdio.h>

int main(){
	double charge, chargeE;
	double electrons;

	printf("Enter the charge: ");
	scanf("%lf", &charge);

	printf("Enter the charge of an electron: ");
	scanf("%le",&chargeE);

	electrons = (charge / chargeE) * -1 ;
	
	printf("Total numbers of electrons = %le\n",electrons);
	printf("Total numbers of electrons = %lf\n",electrons);

	printf("Press enter to exit!!!");

	while(getchar() != '\n'){

	}

	getchar();
}
