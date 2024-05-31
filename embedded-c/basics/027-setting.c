#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(int argc, char **argv){	// argv -> array of string

	int32_t input, output, mask = 0x90;

	printf("Enter a number : ");
	scanf("%d", &input);

	output = input | mask;
	
	printf("[input] [output] : 0x%x 0x%x\n",input,output);

	smooth_exit();

}


void smooth_exit(void){
	printf("Enter return to exit the application");
	while(getchar() != '\n');
	getchar();
}
