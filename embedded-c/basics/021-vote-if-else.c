#include<stdio.h>
#include<stdint.h>

int main(void){

	int age = 0;
	printf("Enter your age here : ");
	scanf("%d",&age);

	if (age < 18)
		printf("Minimum age of voting is 18. You are not eligible to vote\n");
	else (age >= 18)
		printf("You are eligible to vote\n");


	printf("Press enter key to exit application");
	while(getchar() != '\n');
	getchar();
	return 0;
}
