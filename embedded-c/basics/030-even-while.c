#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(int argc, char **argv){

	int32_t input1, input2;
	
	uint32_t count = 0;

	printf("Enter two numbers : ");
	scanf("%d %d", &input1, &input2);

	if(input1 > input2){
		printf("Ending number > starting number\n");
		smooth_exit();
		return -1;
	}
	
	printf("Even numbers are :\n");

	while(input1 <= input2){
		if(!(input1%2)){
			printf("%4d\t",input1);	// %4 is called width specifier.
						// Now each digit will take 4 colms
			count++;
		}	
		input1++;
	}
	printf("\nTotal even numbers : %u\n", count);
	smooth_exit();
}

void smooth_exit(void){
	printf("Enter return to exit the application");
	while(getchar() != '\n');
	getchar();
}
