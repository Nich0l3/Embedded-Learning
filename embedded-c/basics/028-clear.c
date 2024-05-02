#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(int argc, char **argv){	// argv -> array of string
	
	int32_t input, mask = 7 << 4, output;
	printf("Enter number : ");
	scanf("%d",&input);
	
	output = input & (~mask);

	printf("Result = %d\n",output);

	smooth_exit();

}


void smooth_exit(void){
	printf("Enter return to exit the application");
	while(getchar() != '\n');
	getchar();
}
