#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(int argc, char **argv){	// argv -> array of string

	int32_t num1;
	printf("Enter a number : ");
	scanf("%d",&num1);
	
	if (num1 & 1) 	printf("Number is odd\n");
	else 		printf("Number is even\n");

	smooth_exit();

}


void smooth_exit(void){
	printf("Enter return to exit the application");
	while(getchar() != '\n');
	getchar();
}
