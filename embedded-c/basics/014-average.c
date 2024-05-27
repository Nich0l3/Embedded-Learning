#include <stdio.h>

int main(void){

	float num1, num2, num3;
	float average;

	printf("Enter the first number :");
	scanf("%f",&num1);
	fflush(stdout);
	
	printf("Enter the second number :");
	scanf("%f",&num2);
	fflush(stdout);

	printf("Enter the third number :");
	scanf("%f",&num3);
	fflush(stdout);

	printf("Average of the numbers is : %0.2f\n", (num1+num2+num3)/3);
	
	printf("Press enter to exit !!!\n");
	while( getchar() != '\n'){
	
	}
	getchar();

	return 0;
}
