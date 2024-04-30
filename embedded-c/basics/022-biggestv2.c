#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void){

	float num1,num2;
	printf("Enter the first number(integer): ");

	if (!scanf("%f",&num1)){
		printf("Invalid input! Exiting ...\n ");
		wait_for_user_input();
		return -1;
	}

	printf("Enter the second number(integer): ");

	if (!scanf("%f",&num2)){
		printf("Invalid input! Exiting ...\n");
		wait_for_user_input();
		return -1;
	}

	int32_t n1,n2;
	n1 = num1;
	n2 = num2;

	if ((n1 != num1) || (n2 != num2)){
		printf("Warning ! comparing only integer part\n");
	}

	if (n1 == n2)
		printf("Numbers are equal\n");
	else{
		if (n1 < n2)
			printf("%d is bigger\n",n2);
		else
			printf("%d is bigger\n",n1);
	}


	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void){	
	printf("Press enter key to exit this application");
	while(getchar() != '\n');
	getchar();
}
