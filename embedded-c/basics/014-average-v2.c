#include <stdio.h>

int main(void){

	float num1, num2, num3;
	float average;

	printf("Enter three numbers :");
	scanf("%f %f %f",&num1,&num2, &num3);

	printf("Average of the numbers is : %0.2f\n", (num1+num2+num3)/3);
	
	printf("Press enter to exit !!!\n");
	while( getchar() != '\n'){
	
	}
	getchar();

	return 0;
}
