#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(void){

	int32_t num1, num2;

	printf("Enter two numbers : ");
	scanf("%d %d",&num1, &num2);

	printf("Bitwise AND(&) : %d\n", num1 & num2);
	printf("Bitwise OR(|) : %d\n", num1 | num2);
	printf("Bitwise XOR(^) : %d\n", num1 ^ num2);
	printf("Bitwise NOT(~) : %d\n", ~num1);
	

	smooth_exit();	
}


void smooth_exit(void){

	printf("Press return to exit the application");
	while(getchar() != '\n');
	getchar();
}

