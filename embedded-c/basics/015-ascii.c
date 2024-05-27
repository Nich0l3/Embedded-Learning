#include <stdio.h>

int main(void){

	char in1, in2, in3, in4, in5, in6;

	printf("Enter six character of your choice :");
	scanf("%c %c %c %c %c %c",&in1, &in2, &in3, &in4, &in5, &in6);

	printf("ASCII codes : %d, %d, %d, %d, %d, %d\n", in1, in2, in3, in4, in5, in6);
	
	printf("Press enter to exit the application");
	while (getchar() != '\n')
	{

	}
	getchar();
	
	return 0;
}
