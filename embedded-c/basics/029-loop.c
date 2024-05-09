#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(int argc, char **argv){	// argv -> array of string
	
	uint8_t num = 1;

	while(num <= 10)
		printf("%d\n",num++);

	smooth_exit();

}


void smooth_exit(void){
	printf("Enter return to exit the application");
	while(getchar() != '\n');
	getchar();
}
